#pragma once
#include "CoreMinimal.h"
#include "EVGCharaType.generated.h"

UENUM(BlueprintType)
enum class EVGCharaType : uint8 {
    Human,
    Monster,
    Mechanical,
    Num,
};

