// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS(Blueprintable)
class GALAXIA_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	//make a Health Property
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "My Character")
		float Health = 1;
	

	//Make a isDead Property
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "My Character")
		bool isDead = false;

	//Calculate death function (helper)
	virtual void CalculateDead();


	//Calculate health function
	UFUNCTION(BlueprintCallable, Category = "My Character")
		virtual void CalculateHealth(float delta);

#if WITH_EDITOR
	//Editor-centric code for changing properties
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
		override;
#endif



public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
