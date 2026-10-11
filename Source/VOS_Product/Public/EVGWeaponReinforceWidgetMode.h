#pragma once
#include "CoreMinimal.h"
#include "EVGWeaponReinforceWidgetMode.generated.h"

UENUM(BlueprintType)
namespace EVGWeaponReinforceWidgetMode {
    enum Type {
        None,
        WeaponSelect,
        RecipeSelect,
        Comparation,
        Result,
        ENUM_MAX UMETA(Hidden),
    };
}

