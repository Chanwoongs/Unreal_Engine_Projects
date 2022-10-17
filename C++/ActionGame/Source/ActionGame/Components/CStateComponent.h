#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CStateComponent.generated.h"

UENUM(BlueprintType)
enum class EStateType : uint8 // 8byte unsigned int 자료형 사용
{
	Idle, Roll, Backstep, Equip, Action, Hitted, Dead, Max // Max 같은 변수를 해주는 갯수를 알 수 있다.
};
// 상태가 바뀔 때 상태가 바뀐 것을 전파해줄 Dynamic Delegate
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStateTypeChanged, EStateType, InPreviousType, EStateType, InNewType);

// CLASS 플레이어의 상태를 관리
UCLASS( ClassGroup=(GameProject), meta=(BlueprintSpawnableComponent) )
class ACTIONGAME_API UCStateComponent : public UActorComponent
{
	GENERATED_BODY()


public:
	UFUNCTION(BlueprintPure)
		FORCEINLINE bool IsIdleMode() { return Type == EStateType::Idle; }

	UFUNCTION(BlueprintPure)
		FORCEINLINE bool IsRollMode() { return Type == EStateType::Roll; }

	UFUNCTION(BlueprintPure)
		FORCEINLINE bool IsBackstepMode() { return Type == EStateType::Backstep; }

	UFUNCTION(BlueprintPure)
		FORCEINLINE bool IsEquipMode() { return Type == EStateType::Equip; }

	UFUNCTION(BlueprintPure)
		FORCEINLINE bool IsActionMode() { return Type == EStateType::Action; }

	UFUNCTION(BlueprintPure)
		FORCEINLINE bool IsHittedMode() { return Type == EStateType::Hitted; }

	UFUNCTION(BlueprintPure)
		FORCEINLINE bool IsDeadMode() { return Type == EStateType::Dead; }

public:
	void SetIdleMode();
	void SetRollMode();
	void SetBackstepMode();
	void SetEquipMode();
	void SetActionMode();
	void SetHittedMode();
	void SetDeadMode();

private:
	void ChangeType(EStateType InType);

public:	
	UCStateComponent();

protected:
	virtual void BeginPlay() override;
		
public:
	UPROPERTY(BlueprintAssignable)
		FStateTypeChanged OnStateTypeChanged;
private:
	EStateType Type;
};

