#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CPlayer.generated.h"

// delegate �� ����ü �ܴ̿� �� �ȵ��� �� ���̿�

UCLASS()
class CPP_PROJECT_API ACPlayer : public ACharacter
{
	// �� ���̿��� �ƹ��� �ڵ嵵 ���� �ȵȴ�.
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly)
		class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleDefaultsOnly)
		class UCameraComponent* Camera;

public:
	ACPlayer();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	// �Է��� �޾� ���ϴ´�� ó���� �� �ֵ��� ���ִ� �Լ�
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
