#pragma once
#include "CoreMinimal.h"
#include "EVG3DHudStatusType.generated.h"

UENUM(BlueprintType)
enum class EVG3DHudStatusType : uint8 {
    Enemy,
    Party,
    Num,
    None,
};

