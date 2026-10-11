#pragma once
#include "CoreMinimal.h"
#include "EVGDungeonDirection.generated.h"

UENUM(BlueprintType)
enum class EVGDungeonDirection : uint8 {
    X_Minus,
    X_Plus,
    Y_Minus,
    Y_Plus,
    None = 255,
};

