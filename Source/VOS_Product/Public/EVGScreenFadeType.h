#pragma once
#include "CoreMinimal.h"
#include "EVGScreenFadeType.generated.h"

UENUM(BlueprintType)
enum class EVGScreenFadeType : uint8 {
    FadeOut,
    FadeIn,
    Invalid,
};

