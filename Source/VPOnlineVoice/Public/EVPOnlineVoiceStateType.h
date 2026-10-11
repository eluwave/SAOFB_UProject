#pragma once
#include "CoreMinimal.h"
#include "EVPOnlineVoiceStateType.generated.h"

UENUM(BlueprintType)
enum class EVPOnlineVoiceStateType : uint8 {
    Disable,
    Idle,
    Talking,
    Mute,
    Num,
    None,
};

