#pragma once
#include "CoreMinimal.h"
#include "EVGCharaGender.generated.h"

UENUM(BlueprintType)
enum class EVGCharaGender : uint8 {
    Male,
    Female,
    Unknown,
    Num,
};

