#pragma once
#include "CoreMinimal.h"
#include "EVGDungeonRoomType.generated.h"

UENUM(BlueprintType)
enum class EVGDungeonRoomType : uint8 {
    Blank,
    Room,
    Passage,
};

