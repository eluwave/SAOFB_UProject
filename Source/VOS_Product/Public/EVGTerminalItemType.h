#pragma once
#include "CoreMinimal.h"
#include "EVGTerminalItemType.generated.h"

UENUM(BlueprintType)
enum class EVGTerminalItemType : uint8 {
    CustomData,
    SkillLearn,
    SkillEquip,
    GadgetEquip,
    AvaterCustomize,
    Gallery,
    Option,
    DataSave,
    Num,
    None,
};

