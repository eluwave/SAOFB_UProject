#pragma once
#include "CoreMinimal.h"
#include "EVGMarksReportType.generated.h"

UENUM(BlueprintType)
enum class EVGMarksReportType : uint8 {
    Invalid,
    Heal,
    Ailment,
    Buff,
    Damage,
    GoodActionForming,
    GoodActionAchievement,
    Skill,
    Num,
};

