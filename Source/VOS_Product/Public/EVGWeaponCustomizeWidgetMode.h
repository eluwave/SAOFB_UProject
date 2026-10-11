#pragma once
#include "CoreMinimal.h"
#include "EVGWeaponCustomizeWidgetMode.generated.h"

UENUM(BlueprintType)
namespace EVGWeaponCustomizeWidgetMode {
    enum Type {
        None,
        WeaponSelect,
        MemorySelect,
        Comparation,
        Result,
        ENUM_MAX UMETA(Hidden),
    };
}

