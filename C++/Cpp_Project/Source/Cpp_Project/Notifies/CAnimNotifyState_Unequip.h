#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "CAnimNotifyState_Unequip.generated.h"

UCLASS()
class CPP_PROJECT_API UCAnimNotifyState_Unequip : public UAnimNotifyState
{
	GENERATED_BODY()
	
public:
	FString GetNotifyName_Implementation() const;

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration);
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);

};
