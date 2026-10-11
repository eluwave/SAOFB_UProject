#pragma once
#include "CoreMinimal.h"
#include "EVPOnlineRegionType.generated.h"

UENUM(BlueprintType)
enum class EVPOnlineRegionType : uint8 {
    Jp,
    Us,
    Eu,
    Asia,
    Other,
    None,
};

