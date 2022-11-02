#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CAction.generated.h"

// Action �纻�� ������ Ŭ����

UCLASS()
class ACTIONGAME_API UCAction : public UObject
{
	GENERATED_BODY()

public:
	friend class UCActionData;

public:
	FORCEINLINE class ACEquipment* GetEquipment() { return Equipment; }
	FORCEINLINE class ACDoAction* GetDoAction() { return DoAction; }
	FORCEINLINE class ACAttachment* GetAttachment() { return Attachment; }

	FORCEINLINE FLinearColor GetEquipmentColor() { return EquipmentColor; }

	
private:
	class ACEquipment* Equipment;
	class ACAttachment* Attachment;
	class ACDoAction* DoAction;

	FLinearColor EquipmentColor;

};
