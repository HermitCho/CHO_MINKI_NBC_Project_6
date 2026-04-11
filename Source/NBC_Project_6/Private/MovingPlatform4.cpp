// Fill out your copyright notice in the Description page of Project Settings.

#include "MovingPlatform4.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInterface.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AMovingPlatform4::AMovingPlatform4()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);


	SceneRoot->SetMobility(EComponentMobility::Movable);
	StaticMeshComp->SetMobility(EComponentMobility::Movable);

	MoveSpeed = 1000.0f;
	MaxMoveDistance = 100.0f;
	bIsReturning = false;

	// 1. 스태틱 메시 로드
	static ConstructorHelpers::FObjectFinder<UStaticMesh> StaticMeshAsset(TEXT(""));
	if (StaticMeshAsset.Succeeded())
	{
		StaticMeshComp->SetStaticMesh(StaticMeshAsset.Object);
	}

	// 2. 머티리얼 로드
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT(""));
	if (MaterialAsset.Succeeded())
	{
		StaticMeshComp->SetMaterial(0, MaterialAsset.Object);
	}
}

void AMovingPlatform4::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();

	MoveSpeed = FMath::RandRange(300.0f, 800.0f);
	MaxMoveDistance = FMath::RandRange(200.0f, 600.0f);

	//타이머 사용 -> 플랫폼 사라지게 만들기
	GetWorldTimerManager().SetTimer(DisappearTimerHandle, this, &AMovingPlatform4::TogglePlatform, 3.0f, true);
}

//플랫폼을 사라지게 만드는 함수
void AMovingPlatform4::TogglePlatform()
{
	bool bIsHidden = IsHidden();
	SetActorHiddenInGame(!bIsHidden);

	SetActorEnableCollision(bIsHidden);
}

void AMovingPlatform4::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!IsHidden())
	{
		MoveActorPosition(DeltaTime);
	}
}

/*
좌우 반복 이동

StartPosition을 기준으로 좌우 반복 운동
최대 거리만큼 이동 시, 반대 방향으로 이동
*/
void AMovingPlatform4::MoveActorPosition(float DeltaTime)
{
	FVector CurrentLocation = GetActorLocation();

	FVector Direction = GetActorRightVector();
	if (bIsReturning)
	{
		CurrentLocation -= Direction * MoveSpeed * DeltaTime;
	}
	else
	{
		CurrentLocation += Direction * MoveSpeed * DeltaTime;
	}

	float DistanceMoved = FVector::Dist(StartLocation, CurrentLocation);

	if (DistanceMoved >= MaxMoveDistance)
	{
		bIsReturning = !bIsReturning;
		FVector MoveDirection = (CurrentLocation - StartLocation).GetSafeNormal();
		CurrentLocation = StartLocation + (MoveDirection * MaxMoveDistance);
	}

	SetActorLocation(CurrentLocation);
}