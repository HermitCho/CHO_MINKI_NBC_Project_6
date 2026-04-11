#include "PlatformSpawner.h"
#include "MovingPlatform5.h"
#include "Engine/World.h"

APlatformSpawner::APlatformSpawner()
{
	PrimaryActorTick.bCanEverTick = false;
}

void APlatformSpawner::BeginPlay()
{
	Super::BeginPlay();
	GenerateRandomPuzzle();
}

//플랫폼을 반경 내 랜덤 스폰 + 동적 스폰
void APlatformSpawner::GenerateRandomPuzzle()
{
	if (!PlatformClass) return;

	for (int32 i = 0; i < SpawnCount; ++i)
	{
		FVector SpawnLocation = GetActorLocation() + FVector(
			FMath::RandRange(-2000.f, 2000.f),
			FMath::RandRange(-2000.f, 2000.f),
			FMath::RandRange(0.f, 500.f)
		);

		FRotator SpawnRotation = FRotator(0.f, FMath::RandRange(0.f, 360.f), 0.f);

		GetWorld()->SpawnActor<AMovingPlatform5>(PlatformClass, SpawnLocation, SpawnRotation);
	}
}