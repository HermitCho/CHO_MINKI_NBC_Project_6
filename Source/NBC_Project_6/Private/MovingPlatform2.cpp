// Fill out your copyright notice in the Description page of Project Settings.
#include "MovingPlatform2.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInterface.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AMovingPlatform2::AMovingPlatform2()
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
	RotationSpeed = 1000.0f;

	MaxMoveDistance = 1000.0f;
	CurrentMoveDistance = 0.0f;

	MaxRotateAngle = 90.0f;
	CurrentRotateAngle = 0.0f;

	IsTurn = false;

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

/*
사각형으로 움직이기

최대 거리(정사각형의 한 변의 길이)만큼 움직이면 IsTurn을 바꿔서 회전 모드로 변경
회전모드가 되면 오른쪽으로 90도 회전 후, 필요 변수들 초기화
*/
void AMovingPlatform2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (CurrentMoveDistance < MaxMoveDistance && !IsTurn)
	{
		MoveActorPosition(DeltaTime);
		if (CurrentMoveDistance >= MaxMoveDistance)
		{
			IsTurn = true;
		}
	}
	else
	{
		RotateActorPosition(DeltaTime);
		if (CurrentRotateAngle >= MaxRotateAngle)
		{
			IsTurn = false;
			CurrentMoveDistance = 0;
			CurrentRotateAngle = 0;
		}
	}
}

void AMovingPlatform2::MoveActorPosition(float DeltaTime)
{
	FVector NewLocation = GetActorLocation();
	float MoveDelta = MoveSpeed * DeltaTime;

	float RemainingDist = MaxMoveDistance - CurrentMoveDistance;
	if (MoveDelta > RemainingDist)
	{
		MoveDelta = RemainingDist;
	}

	NewLocation += GetActorForwardVector() * MoveDelta;
	SetActorLocation(NewLocation);

	CurrentMoveDistance += MoveDelta;
}

void AMovingPlatform2::RotateActorPosition(float DeltaTime)
{
	FRotator NewRotation = GetActorRotation();
	float RotationDelta = RotationSpeed * DeltaTime;

	float RemainingAngle = MaxRotateAngle - CurrentRotateAngle;
	if (RotationDelta > RemainingAngle)
	{
		RotationDelta = RemainingAngle;
	}

	NewRotation += FRotator(0.0f, 1.0f, 0.0f) * RotationDelta;
	SetActorRotation(NewRotation);

	CurrentRotateAngle += RotationDelta;
}

float AMovingPlatform2::GetMoveSpeed() const
{
	return MoveSpeed;
}

float AMovingPlatform2::GetRotationSpeed() const
{
	return RotationSpeed;
}