#pragma once
#include "CoreMinimal.h"
#include "FVGCharacterHitBreak.generated.h"

UENUM(BlueprintType)
enum class FVGCharacterHitBreak : uint8 {
    None,
    Erase,
    Detach,
};

