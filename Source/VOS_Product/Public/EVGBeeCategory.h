#pragma once
#include "CoreMinimal.h"
#include "EVGBeeCategory.generated.h"

UENUM(BlueprintType)
enum class EVGBeeCategory : uint8 {
    Attacker,
    Shooter,
    QueenBee,
    NUM,
};

