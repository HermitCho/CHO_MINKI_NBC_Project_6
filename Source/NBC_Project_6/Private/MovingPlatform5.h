#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform5.generated.h"

UCLASS()
class NBC_PROJECT_6_API AMovingPlatform5 : public AActor
{
	GENERATED_BODY()

public:
	AMovingPlatform5();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	// 랜덤 속성 변수
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform|Component")
	float MoveSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform|Component")
	float RotationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform|Component")
	float MaxMoveDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform|Component")
	FVector MoveDirection;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform|Component")
	FVector StartPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform|Component")
	bool bIsReturning;

	// 타이머 시스템
	FTimerHandle VisibilityTimerHandle;

	UFUNCTION()
	void ToggleVisibility();
};