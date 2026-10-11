#pragma once
#include "CoreMinimal.h"
#include "EVGBattleType.generated.h"

UENUM(BlueprintType)
enum class EVGBattleType : uint8 {
    None,
    Coop,
    VersusRankMatch,
    VersusPlayerMatch,
    VersusSpecifiedRankMatch,
    VersusSpecifiedPlayerMatch,
    TeamDeathmatchRankMatch,
    TeamDeathmatchPlayerMatch,
    TeamDeathmatchSpecifiedRankMatch,
    TeamDeathmatchSpecifiedPlayerMatch,
    FreeForAll,
    BattleRoyalPlayerMatch,
    BattleRoyalSpecifiedPlayerMatch,
    Defence,
    CoopExtra,
    MissionSpecified,
};

