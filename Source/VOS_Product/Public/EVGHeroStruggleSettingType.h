#pragma once
#include "CoreMinimal.h"
#include "EVGHeroStruggleSettingType.generated.h"

UENUM(BlueprintType)
enum class EVGHeroStruggleSettingType : uint8 {
    TeamBattle,
    BattleRoyal,
    HeroMission,
    Max,
};

