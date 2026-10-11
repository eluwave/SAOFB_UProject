#pragma once
#include "CoreMinimal.h"
#include "EVGCoopLobbySettingItemModeType.generated.h"

UENUM(BlueprintType)
enum class EVGCoopLobbySettingItemModeType : uint8 {
    All,
    CreateRoom,
    SearchRoom,
    ENUM_MAX UMETA(Hidden),
};

