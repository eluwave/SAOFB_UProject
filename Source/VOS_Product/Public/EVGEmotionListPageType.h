#pragma once
#include "CoreMinimal.h"
#include "EVGEmotionListPageType.generated.h"

UENUM(BlueprintType)
enum class EVGEmotionListPageType : uint8 {
    Page01,
    Page02,
    Page03,
    Page04,
    All,
    Num,
    None,
};

