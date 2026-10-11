#pragma once
#include "CoreMinimal.h"
#include "EVGBattleTalkMainSpeaker.generated.h"

UENUM(BlueprintType)
enum class EVGBattleTalkMainSpeaker : uint8 {
    Self,
    Target,
    Teammate,
    TeammateNotSelf,
    TeammateNotLeader,
    TeammateNotPlayer,
    TeammateNotSelfPlayer,
};

