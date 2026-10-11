#pragma once
#include "CoreMinimal.h"
#include "EVPOnlineBattleRulePolicy.generated.h"

UENUM(BlueprintType)
enum class EVPOnlineBattleRulePolicy : uint8 {
    All,
    BossBattle,
    DeathMatch,
    BattleRoyal,
    Num,
    None,
};

