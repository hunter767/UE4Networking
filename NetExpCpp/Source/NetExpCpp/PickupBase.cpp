// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupBase.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
APickupBase::APickupBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	bReplicates = true;

	if (Role == ROLE_Authority)
	{
		bIsActive = true;
	}

	//Root
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	RootComponent = SceneRoot;

	//Static mesh
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupMesh"));
	MeshComponent->SetupAttachment(RootComponent);



}

// Called when the game starts or when spawned
void APickupBase::BeginPlay()
{
	Super::BeginPlay();
	
}

bool APickupBase::IsActive()
{
	return bIsActive;
}

void APickupBase::SetIsActive(bool NewIsActive)
{
	if (Role == ROLE_Authority)
	{
		bIsActive = NewIsActive;
	}
}

void APickupBase::OnRep_IsActive()
{
}

// Called every frame
void APickupBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APickupBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APickupBase, bIsActive);
}