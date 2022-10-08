#include "CAttachment.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/ShapeComponent.h"
#include "Components/CStateComponent.h"
#include "Components/CStatusComponent.h"

ACAttachment::ACAttachment()
{
	CHelpers::CreateComponent<USceneComponent>(this, &Scene, "Scene");
}

void ACAttachment::BeginPlay()
{
	OwnerCharacter = Cast<ACharacter>(GetOwner());
	State = CHelpers::GetComponent<UCStateComponent>(OwnerCharacter);
	Status = CHelpers::GetComponent<UCStatusComponent>(OwnerCharacter);

	// UShapeComponent 언리얼에서 사용되는 충돌체(Sphere, Cube, Capsule 컴포넌트의 부모 컴포넌트 클래스)
	// 어떠한 충돌체로 정의해도 가져올 수 있다.
	GetComponents<UShapeComponent>(ShapeComponents);
	for (UShapeComponent* component : ShapeComponents)
	{
		component->OnComponentBeginOverlap.AddDynamic(this, &ACAttachment::OnComponentBeginOverlap);
		component->OnComponentEndOverlap.AddDynamic(this, &ACAttachment::OnComponentEndOverlap);
	}

	OffCollision();

	Super::BeginPlay();
}

void ACAttachment::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// 다른 class type만 공격
	CheckTrue(OwnerCharacter == OtherActor);
	CheckTrue(OtherActor->GetClass() == OwnerCharacter->GetClass());

	if (OnAttachmentBeginOverlap.IsBound())
	{
		OnAttachmentBeginOverlap.Broadcast(OwnerCharacter, this, Cast<ACharacter>(OtherActor));
	}
}

void ACAttachment::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OnAttachmentEndOverlap.IsBound())
	{
		OnAttachmentEndOverlap.Broadcast(OwnerCharacter, this, Cast<ACharacter>(OtherActor));
	}

}

void ACAttachment::AttachTo(FName InSocketName)
{
	AttachToComponent(OwnerCharacter->GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true), InSocketName);
}


void ACAttachment::OnCollision()
{
	for (UShapeComponent* component : ShapeComponents)
	{
		component->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}

	if (OnAttachmentCollision.IsBound())
	{
		OnAttachmentCollision.Broadcast();
	}
}

void ACAttachment::OffCollision()
{
	for (UShapeComponent* component : ShapeComponents)
	{
		component->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	if (OffAttachmentCollision.IsBound())
	{
		OffAttachmentCollision.Broadcast();
	}
}