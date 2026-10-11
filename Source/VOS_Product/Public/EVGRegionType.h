#pragma once
#include "CoreMinimal.h"
#include "EVGRegionType.generated.h"

UENUM(BlueprintType)
enum class EVGRegionType : uint8 {
    All,
    Jp,
    Us,
    Eu,
    Asis,
    Other,
};

