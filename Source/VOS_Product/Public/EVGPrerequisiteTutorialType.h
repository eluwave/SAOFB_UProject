#pragma once
#include "CoreMinimal.h"
#include "EVGPrerequisiteTutorialType.generated.h"

UENUM(BlueprintType)
enum class EVGPrerequisiteTutorialType : uint8 {
    None,
    PostQuote,
    Complete,
};

