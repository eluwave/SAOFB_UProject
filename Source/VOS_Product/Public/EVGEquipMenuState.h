#pragma once
#include "CoreMinimal.h"
#include "EVGEquipMenuState.generated.h"

UENUM(BlueprintType)
enum class EVGEquipMenuState : uint8 {
    Equip,
    Weapon,
    Costume,
    Comparison,
    Num,
    None,
};

