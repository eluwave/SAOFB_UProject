#pragma once
#include "CoreMinimal.h"
#include "EVGStatusMeterType.generated.h"

UENUM(BlueprintType)
enum class EVGStatusMeterType : uint8 {
    HP,
    EXP,
    Weight00,
    Weight01,
    Weight02,
    Weight03,
    Weight04,
    Weight05,
    Friend00,
    Friend01,
    WeapnProficiency00,
    WeapnProficiency01,
    WeapnProficiency02,
    WeapnProficiency03,
    WeapnProficiency04,
    Num,
    None,
};

