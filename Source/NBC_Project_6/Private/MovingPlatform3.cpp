// Fill out your copyright notice in the Description page of Project Settings.

#include "MovingPlatform3.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInterface.h"
#include "Components/StaticMeshComponent.h"

AMovingPlatform3::AMovingPlatform3()
{
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);


	SceneRoot->SetMobility(EComponentMobility::Movable);
	StaticMeshComp->SetMobility(EComponentMobility::Movable);

	MoveSpeed = 800.0f;
	MaxMoveDistance = 80.0f;
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

void AMovingPlatform3::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();
}

// Called every frame
void AMovingPlatform3::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoveActorPosition(DeltaTime);
}


/*
좌우 반복 이동

StartPosition을 기준으로 좌우 반복 운동
최대 거리만큼 이동 시, 반대 방향으로 이동
*/
void AMovingPlatform3::MoveActorPosition(float DeltaTime)
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

//
float AMovingPlatform3::GetMoveSpeed() const
{
	return MoveSpeed;
}