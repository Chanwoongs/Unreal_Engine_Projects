#pragma once

#include "CoreMinimal.h"
#include "Characters/CEnemy.h"
#include "CEnemy_AI.generated.h"

UCLASS()
class ACTIONGAME_API ACEnemy_AI : public ACEnemy
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditDefaultsOnly, Category = "AI")
		class UBehaviorTree* BehaviorTree;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
		uint8 TeamID = 1;

protected:
	virtual void BeginPlay() override;
	virtual void Hitted();

private:
	UPROPERTY(VisibleDefaultsOnly)
		class UCPatrolComponent* Patrol;
public:
	FORCEINLINE class UBehaviorTree* GetBehaviorTree() { return BehaviorTree; }
	FORCEINLINE uint8 GetTeamID() { return TeamID; }

public:
	ACEnemy_AI();
};
