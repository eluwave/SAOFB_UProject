#pragma once
#include "CoreMinimal.h"
#include "EVGRegionBit.generated.h"

UENUM(BlueprintType)
enum class EVGRegionBit : uint8 {
    Jp,
    Us,
    Eu,
    Asia,
    Other,
};

