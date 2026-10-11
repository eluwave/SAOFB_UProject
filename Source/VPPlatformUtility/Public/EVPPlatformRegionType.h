#pragma once
#include "CoreMinimal.h"
#include "EVPPlatformRegionType.generated.h"

UENUM(BlueprintType)
enum class EVPPlatformRegionType : uint8 {
    Jp,
    Us,
    Eu,
    Asia,
    Other,
    Num,
    None,
};

