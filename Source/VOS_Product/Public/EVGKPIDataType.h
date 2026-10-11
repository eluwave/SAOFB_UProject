#pragma once
#include "CoreMinimal.h"
#include "EVGKPIDataType.generated.h"

UENUM(BlueprintType)
enum class EVGKPIDataType : uint8 {
    Matching,
    Language,
    DLC,
    Level,
    Quest,
    Rank,
    AvatarParam,
    SelectChara,
    VersusResult,
    Equipment,
    Skill,
    AvatarSetting,
    ImpersonatorSetting,
    Num,
    None,
};

