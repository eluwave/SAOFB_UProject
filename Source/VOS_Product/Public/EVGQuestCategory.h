#pragma once
#include "CoreMinimal.h"
#include "EVGQuestCategory.generated.h"

UENUM(BlueprintType)
namespace EVGQuestCategory {
    enum Type {
        Main,
        Sub,
        Normal,
        BountyHunt,
        NamedHunt,
        Treasure,
        Coop,
        Versus,
        HeroVersus,
        PvPVersus,
        BOB,
        BOBTask,
        HeroPvPVersus,
        BattleRoyal,
        HeroBattleRoyal,
        Defence,
        Mission,
        ENUM_MAX UMETA(Hidden),
    };
}

