#pragma once
#include "CoreMinimal.h"
#include "EVGDamageImpact.generated.h"

UENUM(BlueprintType)
enum class EVGDamageImpact : uint8 {
    None,
    Low,
    LowBlend,
    High,
    Blow,
    Down,
    Upper,
    Stagger,
    Blind,
    Num,
};

