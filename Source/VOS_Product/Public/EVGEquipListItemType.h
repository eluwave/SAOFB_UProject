#pragma once
#include "CoreMinimal.h"
#include "EVGEquipListItemType.generated.h"

UENUM(BlueprintType)
enum class EVGEquipListItemType : uint8 {
    Weapon1,
    Weapon2,
    Costume,
    Accessory1,
    Accessory2,
    Num,
    None,
};

