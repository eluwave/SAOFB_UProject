#pragma once
#include "CoreMinimal.h"
#include "EVGFacialExpressionPattern.generated.h"

UENUM(BlueprintType)
enum class EVGFacialExpressionPattern : uint8 {
    Normal,
    Serious,
    Smile1,
    Smile2,
    Smile3,
    Shout,
    Anger,
    Fear,
    Sorrow,
    Notice,
    Surprise,
    Chant,
    Shy,
    Worry,
    Damage,
    Down,
    Dead,
    Num,
};

