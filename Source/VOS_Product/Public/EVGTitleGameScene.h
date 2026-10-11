#pragma once
#include "CoreMinimal.h"
#include "EVGTitleGameScene.generated.h"

UENUM(BlueprintType)
enum class EVGTitleGameScene : uint8 {
    Advertise,
    Title,
    DataLoad,
    ENUM_MAX UMETA(Hidden),
};

