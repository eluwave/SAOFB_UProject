#pragma once
#include "CoreMinimal.h"
#include "EVGPlatformOptionPageType.generated.h"

UENUM(BlueprintType)
enum class EVGPlatformOptionPageType : uint8 {
    Graphics,
    Keyboard,
    Controller,
    Language,
    Num,
    None,
};

