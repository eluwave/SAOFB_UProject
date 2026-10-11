#pragma once
#include "CoreMinimal.h"
#include "EVPOnlinePurposeType.generated.h"

UENUM(BlueprintType)
enum class EVPOnlinePurposeType : uint8 {
    ClearPurpose,
    Farming,
    ToLevelUp,
    ToGetMoney,
    GetMaterialItem,
    GetRareItem,
    ToTimeAttack,
    Num,
    None,
};

