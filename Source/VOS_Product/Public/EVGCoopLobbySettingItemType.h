#pragma once
#include "CoreMinimal.h"
#include "EVGCoopLobbySettingItemType.generated.h"

UENUM(BlueprintType)
enum class EVGCoopLobbySettingItemType : uint8 {
    Region,
    QuestObjective,
    PrivateSlot,
    LevelSetting,
    SearchComment,
    CollectMembers,
    Connection,
    VersusRule,
    DesiredVersusRule,
    RankSetting,
    BossRankSetting,
    TDMRankSetting,
    ENUM_MAX UMETA(Hidden),
};

