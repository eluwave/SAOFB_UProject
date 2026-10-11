#pragma once
#include "CoreMinimal.h"
#include "ENetSocketCipherMode.generated.h"

UENUM(BlueprintType)
enum class ENetSocketCipherMode : uint8 {
    None,
    ECB,
    CBC,
};

