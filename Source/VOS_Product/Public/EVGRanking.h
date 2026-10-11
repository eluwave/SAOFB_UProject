#pragma once
#include "CoreMinimal.h"
#include "EVGRanking.generated.h"

UENUM(BlueprintType)
namespace EVGRanking {
    enum Type {
        Prize,
        Attention,
        TimeAttack,
        ExtraTimeAttack,
        HeroMission,
        HeroMissionParty,
        PocketMoney,
        Num,
    };
}

