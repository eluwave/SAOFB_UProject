#pragma once
#include "CoreMinimal.h"
#include "EVGEmotionListType.generated.h"

UENUM(BlueprintType)
enum class EVGEmotionListType : uint8 {
    Emotion,
    FixedPhrase,
    Num,
    None,
};

