#pragma once
#include "CoreMinimal.h"
#include "EVGRoamCharacterSubProc.generated.h"

UENUM(BlueprintType)
enum class EVGRoamCharacterSubProc : uint8 {
    INVALID,
    Start,
    Wait,
    End,
};

