#pragma once
#include "CoreMinimal.h"
#include "EVGHidden.generated.h"

UENUM(BlueprintType)
namespace EVGHidden {
    enum Type {
        ActionState,
        Demo,
        Owner,
        Accessory,
        Loading,
        Warp,
        BeforeFirstAction,
        MeshVisibility,
        MonsterDead,
        Num,
    };
}

