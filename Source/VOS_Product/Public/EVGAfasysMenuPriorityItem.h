#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysMenuPriorityItem.generated.h"

UENUM(BlueprintType)
namespace EVGAfasysMenuPriorityItem {
    enum Type {
        Weapon,
        Accessory,
        Material,
        Rare,
        Num,
        None,
    };
}

