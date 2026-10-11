#pragma once
#include "CoreMinimal.h"
#include "EVGRegion.generated.h"

UENUM(BlueprintType)
namespace EVGRegion {
    enum Type {
        Jp,
        Us,
        Eu,
        Asia,
        Other,
        Num,
    };
}

