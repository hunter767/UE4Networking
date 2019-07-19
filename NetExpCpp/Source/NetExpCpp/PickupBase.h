// Fill out your copyright notice in the Description page of Project Settings.

//FROM: https://www.youtube.com/watch?v=FcTGyYb7PTs

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "PickupBase.generated.h"

UCLASS()
class NETEXPCPP_API APickupBase : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	APickupBase();

	//required network replication
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintPure, Category = "PickUp")
	bool IsActive();

	UFUNCTION(BlueprintCallable, Category = "PickUp")
		void SetIsActive(bool NewIsActive);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleDefaultsOnly, Category = Pickup)
	USceneComponent* SceneRoot;

	//Pickup mesh
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere)
	USphereComponent* SphereCollision;

	UPROPERTY(Replicated)
	bool bIsActive;

	virtual void OnRep_IsActive();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
