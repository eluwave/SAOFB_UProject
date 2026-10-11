#pragma once
#include "CoreMinimal.h"
#include "EVGAvatarItemGender.generated.h"

UENUM(BlueprintType)
enum class EVGAvatarItemGender : uint8 {
    Male,
    Female,
    Common,
    Num,
    Unknown,
};

