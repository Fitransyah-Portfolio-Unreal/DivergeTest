// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tornado.generated.h"



UCLASS()
class DIVERGETEST_API ATornado : public AActor
{
	GENERATED_BODY()
	
public:	

	ATornado();

	UPROPERTY(EditAnywhere, Category = "Having fun")
	float ForceStrength;

	virtual void Tick(float DeltaTime) override;
protected:
    UPROPERTY(VisibleAnywhere , Category = "Having fun")
	class UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, Category = "Having fun")
	class USphereComponent* InnerSphereComponent;

	UPROPERTY(VisibleAnywhere, Category = "Having fun")
	USphereComponent* OuterSphereComponent;


public:	

   



};
