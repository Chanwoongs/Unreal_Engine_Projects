#pragma once

#include "CoreMinimal.h"
#include "Actions/CDoAction.h"
#include "CDoAction_FireStorm.generated.h"

UCLASS()
class ACTIONGAME_API ACDoAction_FireStorm : public ACDoAction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
		float Time = 5.0f; // �ұ�� ���� �ð�

	UPROPERTY(EditAnywhere)
		float Distance = 200.0f; // �ұ�հ� player���� ����

	UPROPERTY(EditAnywhere)
		float Speed = 100.0f; // �ұ���� �ӵ� 

	UPROPERTY(EditAnywhere)
		float HitTime = 0.25f;

	// BeginPlay���� Decal�� �����´�. Decal�� ��ġ�� Action�� Tick���� �����δ�.
	virtual void BeginPlay() override;

public:
	virtual void DoAction() override;
	virtual void Begin_Action() override;
	virtual void End_Action() override;

	virtual void Tick(float DeltaTime) override;

private:
	virtual void OnAttachmentBeginOverlap(class ACharacter* InAttacker, class AActor* InAttackCauser, class ACharacter* InOtherCharacter) override;
	virtual void OnAttachmentEndOverlap(class ACharacter* InAttacker, class AActor* InAttackCauser, class ACharacter* InOtherCharacter) override;

private:
	class UBoxComponent* Box;
	class UParticleSystemComponent* Attached;

private:
	UFUNCTION()
		void Finish();

	UFUNCTION()
		void Hitted();

	float Angle;

	TArray<class ACharacter*> HittedCharacter;
};
