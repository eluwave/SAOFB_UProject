#pragma once
#include "CoreMinimal.h"
#include "EVGMemoryChipChangeWidgetMode.generated.h"

UENUM(BlueprintType)
namespace EVGMemoryChipChangeWidgetMode {
    enum Type {
        None,
        FriendItemSelect,
        PlayerItemSelect,
        Comparation,
        Result,
        ENUM_MAX UMETA(Hidden),
    };
}

