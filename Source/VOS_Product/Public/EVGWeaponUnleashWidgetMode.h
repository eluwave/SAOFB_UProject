#pragma once
#include "CoreMinimal.h"
#include "EVGWeaponUnleashWidgetMode.generated.h"

UENUM(BlueprintType)
namespace EVGWeaponUnleashWidgetMode {
    enum Type {
        None,
        WeaponSelect,
        Comparation,
        Result,
        ENUM_MAX UMETA(Hidden),
    };
}

