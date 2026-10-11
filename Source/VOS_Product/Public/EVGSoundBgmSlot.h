#pragma once
#include "CoreMinimal.h"
#include "EVGSoundBgmSlot.generated.h"

UENUM(BlueprintType)
namespace EVGSoundBgmSlot {
    enum Type {
        MAIN,
        BATTLE,
        NAMED,
        BOSS,
        EVENT,
        NUM,
        NONE,
    };
}

