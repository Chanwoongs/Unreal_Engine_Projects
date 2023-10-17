# Unreal_Engine_Projects
### 가장 대중적인 MMORPG, TPS 장르 게임의 데모 버전입니다.
#### 두 데모 게임은 한 프로젝트이며 다른 GameMode를 사용합니다.
#### 간단한 Widget, 초기화를 제외한 모든 기능은 C++로 구현하였습니다.

## 개발 기간 (1인 개발)
> ### 2022.10 ~ 2022.12

## MMORPG Game Demo
<div aling="center">
  <img src="https://github.com/Chanwoongs/Unreal_Engine_Projects/assets/26241243/16deceb2-699d-43ec-b070-023f839ef957" width="854" height="480"/>    
</div>

### [YouTube 영상](https://www.youtube.com/watch?v=o6TL89M1M4o)

### 개요
> #### 플레이어는 검, 주먹, 발차기, 마법 등으로 원거리, 근거리 적과 전투

### 기술
> #### 옵저버 패턴
> 상태, 무기 변경 등 변화가 일어날 시 Delegate에 바인딩된 리스너들의 함수 호출
> #### [Inverse Kinematics](https://github.com/Chanwoongs/Unreal_Engine_Projects/blob/main/C%2B%2B/ActionGame/Source/ActionGame/Components/CFeetComponent.cpp)
> 양 발에서 아래로 LineTrace를 하여 검출된 삼각형의 위치와 Normal을 가져와 더 낮은 발 쪽으로 Pelvis의 위치를 움직이고, Normal을 이용해 발의 Roll, Pitch를 조정
> #### [Targeting](https://github.com/Chanwoongs/Unreal_Engine_Projects/blob/main/C%2B%2B/ActionGame/Source/ActionGame/Components/CTargetComponent.cpp)
> 반경안에 있는 모든 적을 검출하고, 컨트롤러의 방향에서 가장 가까운 적을 타겟팅, 검출된 적들 중 타겟과 좌,우로 가장 가까운 적으로 타겟을 변경할 수 있음
> #### [Combo](https://github.com/Chanwoongs/Unreal_Engine_Projects/blob/main/C%2B%2B/ActionGame/Source/ActionGame/Actions/CDoAction_Melee.cpp)
> 공격 중 NotifyState에서 입력을 감지하면 콤보 진행을 알리고 콤보 배열의 Index를 증가시켜 다음 콤보 실행

## TPS Game Demo
<div aling="center">
  <img src="https://github.com/Chanwoongs/Unreal_Engine_Projects/assets/26241243/7a272fb4-7179-49d2-b028-2c2524486f26" width="854" height="480"/>    
</div>

### [YouTube 영상](https://www.youtube.com/watch?v=PWedCRgR-O0&t=1s)

### 개요
> #### 플레이어는 총기를 소지하며, 자유롭게 총을 발사하고 적과 전투할 수 있습니다.

### 기술
> #### [액터 등장 Delay](https://github.com/Chanwoongs/Unreal_Engine_Projects/blob/main/C%2B%2B/ActionGame/Source/ActionGame/Actions/CActionData.cpp)
> 무기, 액션 등을 SpawnActorDeferred를 사용해 객체에 필요한 값을 모두 설정한 뒤에 등장하게 하여 BeginPlay가 호출되기 전 Actor 준비 완료
> #### 다형성
> CPlayer로부터 상속된 CPlayer_Warrior, CPlayer_Swat / CEnemy로부터 상속된 CEnemy_Mutant, CEnemy_Wizard
> 업 캐스팅을 하여 공통 함수 호출
> #### [AI](https://github.com/Chanwoongs/Unreal_Engine_Projects/tree/main/C%2B%2B/ActionGame/Source/ActionGame/BehaviorTree)
> Behavior Tree, Perception, EQS를 이용한 적 AI (행동 변화, 경로 탐색, 감지, 회피)
> #### Animation Retargeting
> 서로 다른 Skeletal에 같은 애니메이션 적용

### 프로젝트를 통해 얻은 점
> #### Unreal Engine에 대한 이해
> 매크로를 통한 BP와 C++ 통신, 액터와 컴포넌트 등 전반적인 개발 프로세스
> #### 옵저버 패턴을 사용하여 주체와 옵저버를 명확하게 분리하면서 일대다의 다양한 동작 가능.
> #### Behavior Tree
> Composites, Decorator, Task, Service, Blackboard

### 아쉬운 점
> #### 빌드 에러
> 프로젝트 배포를 위해 모든 구현을 하고 패키징을 해보았지만, Unknown Error가 발생한다.
> 이후 프로젝트엔 중간 중간 패키징을 시도하여 배포까지 해보고싶다.
> #### 아쉬운 결과물
> 많고 많은 클래스와, 긴 코드에 비해 보여지는 데모는 너무 짧아보여 아쉽다.
> Warrior와 Swat을 게임 도중에 교체하는 플레이어 교체 기능을 구현했다면 더욱 흥미로웠을 것 같다.
