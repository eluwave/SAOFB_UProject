#pragma once
#include "CoreMinimal.h"
#include "EVPOnlineMode.generated.h"

UENUM(BlueprintType)
enum class EVPOnlineMode : uint8 {
    Coop,
    TreasureRankMatch,
    TreasurePlayerMatch,
    HeroRankMatch,
    HeroPlayerMatch,
    TeamDeathRankMatch,
    HeroTeamDeathRankMatch,
    None,
};

