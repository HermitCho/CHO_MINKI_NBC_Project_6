// Fill out your copyright notice in the Description page of Project Settings.
#include "MovingPlatform1.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInterface.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AMovingPlatform1::AMovingPlatform1()
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
원 형태로 움직임

이동 + 회전을 매 틱마다 계산 -> 원 모양을 그리며 이동.
*/
void AMovingPlatform1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoveActorPosition(DeltaTime);
	RotateActorPosition(DeltaTime);
}

void AMovingPlatform1::MoveActorPosition(float DeltaTime)
{
	FVector NewLocation = GetActorLocation();
	NewLocation += GetActorForwardVector() * MoveSpeed * DeltaTime;
	SetActorLocation(NewLocation);
}

void AMovingPlatform1::RotateActorPosition(float DeltaTime)
{
	FRotator NewRotation = GetActorRotation();
	NewRotation += FRotator(0, 0.1f, 0) * RotationSpeed * DeltaTime;
	SetActorRotation(NewRotation);
}

float AMovingPlatform1::GetMoveSpeed() const
{
	return MoveSpeed;
}

float AMovingPlatform1::GetRotationSpeed() const
{
	return RotationSpeed;
}


