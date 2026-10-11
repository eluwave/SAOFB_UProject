#pragma once
#include "CoreMinimal.h"
#include "EVGNWQuestSettingParameterType.generated.h"

UENUM(BlueprintType)
enum class EVGNWQuestSettingParameterType : uint8 {
    VersusTime,
    VersusRespawnNum,
    GoalPoint,
    DeathPenalty,
    Handicap,
    ScoreStreakGaugeRate,
    DisableAccParam,
    DisableWeaponParam,
    DisableUltimate,
    ENUM_MAX UMETA(Hidden),
};

