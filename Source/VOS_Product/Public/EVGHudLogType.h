#pragma once
#include "CoreMinimal.h"
#include "EVGHudLogType.generated.h"

UENUM(BlueprintType)
namespace EVGHudLogType {
    enum Type {
        Common,
        Place,
        KillEnemy,
        Prise,
        Quest,
        PlayerState,
        Skill,
        Buff,
        Debuff,
        Recovery,
        None,
    };
}

