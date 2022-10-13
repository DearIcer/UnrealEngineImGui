// Fill out your copyright notice in the Description page of Project Settings.


#include "ImGuiActor.h"
#include<imgui.h>
// Sets default values
AImGuiActor::AImGuiActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	f = 0.5f;
	
}

// Called when the game starts or when spawned
void AImGuiActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AImGuiActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ImGui::Begin("NewWindows");
	ImGui::Text("Hello, world %d", 123);
	if (ImGui::Button("Save"))
		GEngine->AddOnScreenDebugMessage(1,3,FColor::Red,TEXT("hello"));
	// ImGui::InputText("UTF-8 input", buf, IM_ARRAYSIZE(buf));
	ImGui::SliderFloat("float", &f, 0.0f, 1.0f);
	ImGui::End();
}

