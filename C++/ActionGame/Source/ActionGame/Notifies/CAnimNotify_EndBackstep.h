#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "CAnimNotify_EndBackstep.generated.h"

UCLASS()
class ACTIONGAME_API UCAnimNotify_EndBackstep : public UAnimNotify
{
	GENERATED_BODY()

public: 
	FString GetNotifyName_Implementation() const override;

	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

};
