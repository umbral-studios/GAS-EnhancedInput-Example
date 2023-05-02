// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAssetManager.h"
#include "AbilitySystemGlobals.h"

void UMyAssetManager::StartInitialLoading() {
	Super::StartInitialLoading();
	UAbilitySystemGlobals::Get().InitGlobalData();
	UE_LOG(LogTemp, Warning, TEXT("HEI"));
}