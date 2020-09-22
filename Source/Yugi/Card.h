// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Card.generated.h"
#include "Engine/StaticMesh.h"


struct Data
{
	UPROPERTY(EditAnyWhere)
		FString Name;
	UPROPERTY(EditAnyWhere)
		FString Description;
};

UCLASS()
class YUGI_API ACard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACard();
	Data data;
	UPROPERTY(EditAnyWhere)
		UStaticMesh* mesh;
public:
	virtual void Effect();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
