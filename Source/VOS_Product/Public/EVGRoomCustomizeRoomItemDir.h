#pragma once
#include "CoreMinimal.h"
#include "EVGRoomCustomizeRoomItemDir.generated.h"

UENUM(BlueprintType)
namespace EVGRoomCustomizeRoomItemDir {
    enum Type {
        Front,
        Back,
        Right,
        Left,
        ENUM_MAX UMETA(Hidden),
    };
}

