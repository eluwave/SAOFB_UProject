#pragma once
#include "CoreMinimal.h"
#include "EVGAccessoryCategory.generated.h"

UENUM(BlueprintType)
enum class EVGAccessoryCategory : uint8 {
    Etc,
    Hat,
    Hood,
    HairBand,
    FullFace,
    Glasses,
    Mask,
    Earring,
    Ring,
    Backpack,
    None,
    Num,
};

