// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ImGuiActor.generated.h"

UCLASS()
class UNREALENGINEIMGUI_API AImGuiActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AImGuiActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float f;
	// static char buf[32] = "\xe6\x97\xa5\xe6\x9c\xac\xe8\xaa\x9e";
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
