#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IRifle.generated.h"

UINTERFACE(MinimalAPI)
class UIRifle : public UInterface
{
	GENERATED_BODY()
};

class ACTIONGAME_API IIRifle
{
	GENERATED_BODY()

public:
	virtual class ACDoAction_Rifle* GetRifle() = 0;
	virtual void GetLocationAndDirection(FVector& OutStart, FVector& OutEnd, FVector& OutDirection) = 0;
	// �� ���ִ� ��Ȳ�̶��
	virtual void OnFocus() {}
	virtual void OffFocus() {}
	virtual bool IsAiming() = 0;
};
