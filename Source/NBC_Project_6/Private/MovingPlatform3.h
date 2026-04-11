// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform3.generated.h"

UCLASS()
class AMovingPlatform3 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform3();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Platform|Component")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform|Component")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Platform|Properties")
	FVector StartLocation;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Platform|Properties")
	bool bIsReturning;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Platform|Properties")
	float MaxMoveDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform|Properties")
	float MoveSpeed;

	UFUNCTION(BlueprintCallable, Category = "Item|Actions")
	void MoveActorPosition(float DeltaTime);

	UFUNCTION(BlueprintPure, Category = "Item|Properties")
	float GetMoveSpeed() const;
};
