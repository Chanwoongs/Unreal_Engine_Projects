#include "CGameMode.h"
#include "Global.h"

ACGameMode::ACGameMode()
{

	// �����ڿ��� Ŭ������ Ÿ���� �ҷ��� �� �ִ� ��ü
	//ConstructorHelpers::FClassFinder<APawn>pawn(L"Blueprint'/Game/BP_CPlayer.BP_CPlayer_C'"); 
	// ��� ����Ʈ�� Ŭ���� Ÿ���� �ε��� ���� �ĺ��ڿ� _C�� �ݵ�� ������ �Ѵ�.
	//if (pawn.Succeeded())
	//	pawn.Class;

	// �⺻ �÷��̾��� Ŭ������ �Է¹��� ����
	//DefaultPawnClass = pawn

	CHelpers::GetClass<APawn>(&DefaultPawnClass, "Blueprint'/Game/BP_CPlayer.BP_CPlayer_C'");
}