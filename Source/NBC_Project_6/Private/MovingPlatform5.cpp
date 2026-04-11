#include "MovingPlatform5.h"

AMovingPlatform5::AMovingPlatform5()
{
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	UStaticMeshComponent* Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

	RootComponent->SetMobility(EComponentMobility::Movable);
}

void AMovingPlatform5::BeginPlay()
{
	Super::BeginPlay();
	StartPosition = GetActorLocation();

	MoveSpeed = FMath::RandRange(200.0f, 500.0f);
	RotationSpeed = FMath::RandRange(45.0f, 180.0f);
	MaxMoveDistance = FMath::RandRange(300.0f, 1000.0f);
	MoveDirection = FMath::RandBool() ? GetActorForwardVector() : GetActorRightVector();
	bIsReturning = false;

	// 2~5초 사이의 랜덤 주기로 플랫폼 상태 전환
	float RandomInterval = FMath::RandRange(2.0f, 5.0f);
	GetWorldTimerManager().SetTimer(VisibilityTimerHandle, this, &AMovingPlatform5::ToggleVisibility, RandomInterval, true);
}

void AMovingPlatform5::ToggleVisibility()
{
	bool bIsNowHidden = !IsHidden();
	SetActorHiddenInGame(bIsNowHidden);
	SetActorEnableCollision(!bIsNowHidden); // 시각과 충돌 상태 동기화
}


void AMovingPlatform5::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!IsHidden())
	{
		/*
		CurrentLoc 현 위치 기준으로 움직임 세팅
		DeltaMove로 Tick에서 DeltaTime에 맞는 속도 계산
		bIsReturning이 앞/뒤를 판단
		최대 거리만큼 이동하면, bIsReturning를 반대로 변경(true -> false / false -> true)
		*/
		FVector CurrentLoc = GetActorLocation();
		float DeltaMove = MoveSpeed * DeltaTime;
		CurrentLoc += (bIsReturning ? -MoveDirection : MoveDirection) * DeltaMove;

		if (FVector::Dist(StartPosition, CurrentLoc) >= MaxMoveDistance)
		{
			bIsReturning = !bIsReturning;
		}
		SetActorLocation(CurrentLoc);

		// 오론쪽으로만 회전
		AddActorLocalRotation(FRotator(0.0f, RotationSpeed * DeltaTime, 0.0f));
	}
}