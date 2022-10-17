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
	// Mesh �� �����ϴ� �Լ�
	virtual void ChangeColor(FLinearColor InColor) = 0;

	// ���� ó��
	virtual void BeginDead() {}
	virtual void EndDead() {}
};
