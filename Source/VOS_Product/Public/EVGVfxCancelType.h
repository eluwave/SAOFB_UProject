#pragma once
#include "CoreMinimal.h"
#include "EVGVfxCancelType.generated.h"

UENUM(BlueprintType)
enum class EVGVfxCancelType : uint8 {
    LeaveParticle,
    Erase,
    Num,
    None,
};

