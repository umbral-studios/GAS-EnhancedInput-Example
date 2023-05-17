#pragma once

#include "AttributeSet.h"
#include "PlayerAttributes.generated.h"

UCLASS()
class UPlayerAttributes: public UAttributeSet
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, Category = "Mana")
	FGameplayAttributeData Mana;
};
