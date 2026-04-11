#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlatformSpawner.generated.h"

UCLASS()
class NBC_PROJECT_6_API APlatformSpawner : public AActor
{
	GENERATED_BODY()

public:
	APlatformSpawner();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Spawner")
	TSubclassOf<class AMovingPlatform5> PlatformClass;

	UPROPERTY(EditAnywhere, Category = "Spawner")
	int32 SpawnCount = 15;

	void GenerateRandomPuzzle();
};