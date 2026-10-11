#pragma once
#include "CoreMinimal.h"
#include "EVGPlayerCardEditListItem.generated.h"

UENUM(BlueprintType)
namespace EVGPlayerCardEditListItem {
    enum Type {
        Badge,
        CodeName1,
        Comment1,
        Comment2,
        Comment3,
        PlayerPose,
        AfasysPose,
        Num,
        None,
    };
}

