#pragma once
#include "CoreMinimal.h"
#include "EVGDungeonEnemySpawnType.generated.h"

UENUM(BlueprintType)
enum class EVGDungeonEnemySpawnType : uint8 {
    Default,
    Always,
    LocalPlayerEnterRoom,
    LocalPlayerEnterRoomAndDoorClosed,
    AllPlayerEnterRoom,
    AllPlayerEnterRoomAndDoorClosed,
    AnyPlayerEnterRoom,
};

