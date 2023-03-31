// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CharacterStorage.generated.h"

UCLASS()
class DIVERGETEST_API ACharacterStorage : public AActor
{
	GENERATED_BODY()
	
public:	
	
	ACharacterStorage();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Characters")
	TMap<FString, TSubclassOf<class AMainCharacter>> MainCharMap;





};
