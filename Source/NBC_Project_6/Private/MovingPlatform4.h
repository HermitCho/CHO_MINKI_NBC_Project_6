#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform4.generated.h"

UCLASS()
class AMovingPlatform4 : public AActor
{
	GENERATED_BODY()

public:
	AMovingPlatform4();

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Platform")
	float MoveSpeed;
	UPROPERTY(EditAnywhere, Category = "Platform")
	float MaxMoveDistance;

	FVector StartLocation;
	bool bIsReturning;

	// 타이머 시스템
	FTimerHandle DisappearTimerHandle;

	//사라지는 플랫폼 함수
	UFUNCTION()
	void TogglePlatform();

	void MoveActorPosition(float DeltaTime);

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Platform|Component")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform|Component")
	UStaticMeshComponent* StaticMeshComp;

	virtual void BeginPlay() override;
};