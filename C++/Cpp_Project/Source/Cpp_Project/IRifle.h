#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IRifle.generated.h"

UINTERFACE(MinimalAPI)
class UIRifle : public UInterface
{
	GENERATED_BODY()
};

class CPP_PROJECT_API IIRifle
{
	GENERATED_BODY()

public:
	virtual class ACRifle* GetRifle() = 0;
	virtual void GetLocationAndDirection(FVector& OutStart, FVector& OutEnd, FVector& OutDirection) = 0;
	// 쏠 수있는 상황이라면
	virtual void OnFocus() = 0;
	virtual void OffFocus() = 0;
};
