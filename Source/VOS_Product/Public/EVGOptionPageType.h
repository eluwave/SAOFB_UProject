#pragma once
#include "CoreMinimal.h"
#include "EVGOptionPageType.generated.h"

UENUM(BlueprintType)
enum class EVGOptionPageType : uint8 {
    Sound,
    Camera,
    Controller,
    HUD,
    Etc,
    Num,
    None,
};

