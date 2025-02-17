#include "C03_Box.h"
#include "Global.h"
#include "C03_MulticastTrigger.h"
#include "Components/TextRenderComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Materials/MaterialInstanceDynamic.h"

AC03_Box::AC03_Box()
{
	CHelpers::CreateComponent<USceneComponent>(this, &Scene, "Scene");
	CHelpers::CreateComponent<UTextRenderComponent>(this, &Text, "Text", Scene);

	Text->SetRelativeLocation(FVector(0, 0, 100));
	Text->SetRelativeRotation(FRotator(0, 180, 0));
	Text->SetRelativeScale3D(FVector(2));
	Text->TextRenderColor = FColor::Red;
	Text->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	Text->Text = FText::FromString(GetName());

	UStaticMesh* mesh;
	CHelpers::GetAsset<UStaticMesh>(&mesh, "StaticMesh'/Game/Meshes/M_Cube.M_Cube'");
	for (int32 i = 0; i < 3; i++)
	{
		FString str;
		str.Append("Mesh_").Append(FString::FromInt(i + 1));

		CHelpers::CreateComponent<UStaticMeshComponent>(this, &Mesh[i], FName(str), Scene);

		Mesh[i]->SetRelativeLocation(FVector(0, i * 150, 0));
		Mesh[i]->SetStaticMesh(mesh);
		Mesh[i]->SetSimulatePhysics(false);

	}

}

void AC03_Box::BeginPlay()
{
	Super::BeginPlay();
	
	TArray<AC03_MulticastTrigger*> triggers;
	CHelpers::FindActors< AC03_MulticastTrigger>(GetWorld(), triggers);

	triggers[0]->OnMultiLightBeginOverlap.AddUFunction(this, "OnPhysics"); // AddUFunction 으로 함수 추가

	UMaterialInstanceConstant* material;
	CHelpers::GetAssetDynamic<UMaterialInstanceConstant>(&material, "MaterialInstanceConstant'/Game/Materials/M_Mesh_Inst.M_Mesh_Inst'");

	for (int32 i = 0; i < 3; i++)
	{
		Materials[i] = UMaterialInstanceDynamic::Create(material, this);
		Mesh[i]->SetMaterial(0, Materials[i]);

		FTransform transform = Mesh[i]->GetComponentToWorld(); // 컴포넌트의 World 위치
		WorldLocation[i] = transform.GetLocation();
	}
}

void AC03_Box::OnPhysics(int32 InIndex, FLinearColor InColor)
{
	for (int32 i = 0; i < 3; i++)
	{
		Materials[i]->SetVectorParameterValue("Color", FLinearColor(1, 1, 1));

		Mesh[i]->SetSimulatePhysics(false);
		Mesh[i]->SetWorldLocation(WorldLocation[i]);
	}

	Materials[InIndex]->SetVectorParameterValue("Color", InColor);
	Mesh[InIndex]->SetSimulatePhysics(true);
}

