#pragma once
#include "CoreMinimal.h"
#include "EVGDungeonEnemyEraseType.generated.h"

UENUM(BlueprintType)
enum class EVGDungeonEnemyEraseType : uint8 {
    Default,
    Disable,
    LocalPlayerEnterRoom,
    LocalPlayerEnterRoomAndDoorClosed,
    AllPlayerEnterRoom,
    AllPlayerEnterRoomAndDoorClosed,
};

