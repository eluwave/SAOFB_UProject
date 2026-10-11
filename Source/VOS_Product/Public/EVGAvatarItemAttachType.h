#pragma once
#include "CoreMinimal.h"
#include "EVGAvatarItemAttachType.generated.h"

UENUM(BlueprintType)
enum class EVGAvatarItemAttachType : uint8 {
    Hair,
    Face,
    Body,
    Accessory0,
    Accessory1,
    Num,
};

