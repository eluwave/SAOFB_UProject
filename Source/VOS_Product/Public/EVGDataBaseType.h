#pragma once
#include "CoreMinimal.h"
#include "EVGDataBaseType.generated.h"

UENUM(BlueprintType)
enum class EVGDataBaseType : uint8 {
    None,
    Battle,
    World,
    System,
    Menu,
    Weapon,
    DLC,
    Num,
};

