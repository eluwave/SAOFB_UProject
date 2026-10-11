#pragma once
#include "CoreMinimal.h"
#include "EVPOnlineMatchingConditionType.generated.h"

UENUM(BlueprintType)
enum class EVPOnlineMatchingConditionType : uint8 {
    OnlineMode,
    Region,
    RegionCondition,
    RomVersion,
    CoopProgress,
    LevelLower,
    LevelUpper,
    Purpose,
    Rank,
    RankLower,
    RankUpper,
    DisconnectRate,
    DeathMatchRank,
    DeathMatchRankLower,
    DeathMatchRankUpper,
    Level,
    RoomComment,
    StartingBattle,
    BattleRulePolicy,
    UserFreeComment,
    Num,
    None,
};

