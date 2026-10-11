#pragma once
#include "CoreMinimal.h"
#include "EVGUnitStatusBit.generated.h"

UENUM(BlueprintType)
enum class EVGUnitStatusBit : uint8 {
    ATTACK,
    LONGRANGEATTACK,
    RESCUE,
    HEAL,
    RECOVERY,
    BUFF,
    SELFHEAL,
    SELFRECOVERY,
    SELFBUFF,
    NEEDRESCUE,
    IGNOREATTACK,
    IGNORERECOVERY,
    IGNOREBUFF,
    NOFIRSTATTACK,
    ATTACKCANCELBUFF,
};

