#pragma once
#include "CoreMinimal.h"
#include "EVGNWQuestSettingPlayerModeType.generated.h"

UENUM(BlueprintType)
namespace EVGNWQuestSettingPlayerModeType {
    enum Type {
        Avatar,
        Hero,
        ENUM_MAX UMETA(Hidden),
    };
}

