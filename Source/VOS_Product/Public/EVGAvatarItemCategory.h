#pragma once
#include "CoreMinimal.h"
#include "EVGAvatarItemCategory.generated.h"

UENUM(BlueprintType)
enum class EVGAvatarItemCategory : uint8 {
    Hair,
    Face,
    Body,
    Accessory,
    Num,
    Unknown,
};

