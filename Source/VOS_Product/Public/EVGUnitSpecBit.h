#pragma once
#include "CoreMinimal.h"
#include "EVGUnitSpecBit.generated.h"

UENUM(BlueprintType)
enum class EVGUnitSpecBit : uint8 {
    PLAYER,
    LOCALPLAYER,
    NOORDER,
    HATE,
    NOMOVE,
    NORESCUE,
    LARGESIZE,
    BOSS,
    NAMEDMONSTER,
    BOUNTY,
    SNIPER,
    MELEE,
    FLYING,
    NORUN,
    NOFIRSTATTACK = 16,
    ATTACKCANCELBUFF,
    IGNOREATTACK = 27,
    IGNORERESCUE,
    IGNORERECOVERY,
    IGNOREBUFF,
    DISCOVERED,
};

