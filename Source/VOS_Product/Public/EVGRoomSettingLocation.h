#pragma once
#include "CoreMinimal.h"
#include "EVGRoomSettingLocation.generated.h"

UENUM(BlueprintType)
namespace EVGRoomSettingLocation {
    enum Type {
        Floor,
        Wall,
        Ceiling,
        ENUM_MAX UMETA(Hidden),
    };
}

