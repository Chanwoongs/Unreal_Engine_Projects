#include "CGameMode.h"
#include "Global.h"

ACGameMode::ACGameMode()
{

	// 생성자에서 클래스의 타입을 불러올 수 있는 객체
	//ConstructorHelpers::FClassFinder<APawn>pawn(L"Blueprint'/Game/BP_CPlayer.BP_CPlayer_C'"); 
	// 블루 프린트의 클래스 타입을 로딩할 때는 식별자에 _C를 반드시 붙혀야 한다.
	//if (pawn.Succeeded())
	//	pawn.Class;

	// 기본 플레이어의 클래스를 입력받을 변수
	//DefaultPawnClass = pawn

	CHelpers::GetClass<APawn>(&DefaultPawnClass, "Blueprint'/Game/BP_CPlayer.BP_CPlayer_C'");
}