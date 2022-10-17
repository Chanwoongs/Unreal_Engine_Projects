#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ICharacter.generated.h"

UINTERFACE(MinimalAPI)
class UICharacter : public UInterface
{
	GENERATED_BODY()
};

class ACTIONGAME_API IICharacter
{
	GENERATED_BODY()

public:
	// Mesh 색 변경하는 함수
	virtual void ChangeColor(FLinearColor InColor) = 0;

	// 죽음 처리
	virtual void BeginDead() {}
	virtual void EndDead() {}
};
