#pragma once
#include "CoreMinimal.h"
#include "EVGBulletLineType.generated.h"

UENUM(BlueprintType)
enum class EVGBulletLineType : uint8 {
    Normal,
    PhantomBullet,
    Num,
};

