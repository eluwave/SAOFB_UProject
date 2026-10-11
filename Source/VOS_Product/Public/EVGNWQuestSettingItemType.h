#pragma once
#include "CoreMinimal.h"
#include "EVGNWQuestSettingItemType.generated.h"

UENUM(BlueprintType)
namespace EVGNWQuestSettingItemType {
    enum Type {
        BossBattle,
        DeathMatch,
        BattleRoyal,
        ENUM_MAX UMETA(Hidden),
    };
}

