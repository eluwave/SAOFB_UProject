#pragma once
#include "CoreMinimal.h"
#include "EVGCoopLobbySettingItemPlatformType.generated.h"

UENUM(BlueprintType)
namespace EVGCoopLobbySettingItemPlatformType {
    enum Type {
        PS4,
        XBOX,
        STEAM,
        ENUM_MAX UMETA(Hidden),
    };
}

