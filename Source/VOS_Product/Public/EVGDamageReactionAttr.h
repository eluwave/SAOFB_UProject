#pragma once
#include "CoreMinimal.h"
#include "EVGDamageReactionAttr.generated.h"

UENUM(BlueprintType)
enum class EVGDamageReactionAttr : uint8 {
    FrontFace,
    BackFace,
    Air,
    Num,
};

