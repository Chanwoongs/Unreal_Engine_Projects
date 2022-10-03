#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CRifle.generated.h"

UCLASS()
class CPP_PROJECT_API ACRifle : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly, Category = "Rifle")
		class USkeletalMeshComponent* Mesh;

	UPROPERTY(VisibleDefaultsOnly, Category = "Rifle")
		FName HandSocket = "Hand_Rifle";

	UPROPERTY(VisibleDefaultsOnly, Category = "Rifle")
		FName HolsterSocket = "Holster_Rifle";

	UPROPERTY(VisibleDefaultsOnly, Category = "Rifle")
		UAnimMontage* GrabMontage;

	UPROPERTY(VisibleDefaultsOnly, Category = "Rifle")
		UAnimMontage* UnGrabMontage;

public:
	// World, Character를 아직 모른다.
	static ACRifle* Spawn(class UWorld* InWorld, class ACharacter* InOwner); 

public:
	// 어떤 플랫폼에 상관없이 무조건 인라인 함수로 사용되도록 강제하는 매크로
	FORCEINLINE bool GetEquipped() { return bEquipped; }
	FORCEINLINE bool GetEquipping() { return bEquipping; }
	FORCEINLINE bool GetAiming() { return bAiming; }

public:	
	ACRifle();

	void Equip();
	void Begin_Equip();
	void End_Equip();

	void Unequip();
	void Begin_Unequip();
	void End_Unequip();

	void Begin_Aiming();
	void End_Aiming();


protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

private:
	class ACharacter* OwnerCharacter;

	bool bEquipped;
	bool bEquipping;
	bool bAiming;

};
