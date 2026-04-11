// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform2.generated.h"

UCLASS()
class AMovingPlatform2 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform2();

	virtual void Tick(float DeltaTime) override;


protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Platform|Component")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform|Component")
	UStaticMeshComponent* StaticMeshComp;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform|Properties")
	float MoveSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform|Properties")
	float RotationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform|Properties")
	float MaxMoveDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform|Properties")
	float CurrentMoveDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform|Properties")
	float MaxRotateAngle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform|Properties")
	float CurrentRotateAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform|Properties")
	bool IsTurn;

	UFUNCTION(BlueprintCallable, Category = "Item|Actions")
	void MoveActorPosition(float DeltaTime);

	UFUNCTION(BlueprintCallable, Category = "Item|Actions")
	void RotateActorPosition(float DeltaTime);

	UFUNCTION(BlueprintPure, Category = "Item|Properties")
	float GetMoveSpeed() const;

	UFUNCTION(BlueprintPure, Category = "Item|Properties")
	float GetRotationSpeed() const;

};
