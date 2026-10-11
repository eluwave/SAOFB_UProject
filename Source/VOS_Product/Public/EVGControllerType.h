#pragma once
#include "CoreMinimal.h"
#include "EVGControllerType.generated.h"

UENUM(BlueprintType)
enum class EVGControllerType : uint8 {
    TypeA,
    TypeB,
    TypeC,
    Num,
};

