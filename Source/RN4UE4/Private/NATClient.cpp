// Fill out your copyright notice in the Description page of Project Settings.

#include "RN4UE4.h"
#include "NATClient.h"


// Sets default values
ANATClient::ANATClient()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANATClient::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANATClient::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

