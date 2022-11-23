#pragma once

#include "CoreMinimal.h"
#include "Actions/CAttachment.h"
#include "CAttachment_Rifle.generated.h"

UCLASS()
class ACTIONGAME_API ACAttachment_Rifle : public ACAttachment
{
	GENERATED_BODY()


public:
	ACAttachment_Rifle();

protected:
	virtual void BeginPlay() override;

public:
	virtual void OnEquip_Implementation();
	virtual void OnUnequip_Implementation();



};
