#pragma once
#include "CoreMinimal.h"
#include "EVGHudSubtitlesState.generated.h"

UENUM(BlueprintType)
enum class EVGHudSubtitlesState : uint8 {
    Idle,
    Open,
    Disp,
    Close,
    None,
};

