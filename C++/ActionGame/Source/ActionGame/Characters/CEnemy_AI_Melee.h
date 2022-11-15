#pragma once

#include "CoreMinimal.h"
#include "Characters/CEnemy_AI.h"
#include "CEnemy_AI_Melee.generated.h"

UCLASS()
class ACTIONGAME_API ACEnemy_AI_Melee : public ACEnemy_AI
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	ACEnemy_AI_Melee();

public:
	virtual void ChangeColor(FLinearColor InColor) override;

private:
	virtual void Hitted() override;

private:
	UFUNCTION()
		void RestoreColor();

private:
	class UMaterialInstanceDynamic* BodyMaterial;
	class UMaterialInstanceDynamic* LogoMaterial;

};
