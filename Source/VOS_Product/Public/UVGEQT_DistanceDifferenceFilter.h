#pragma once
#include "CoreMinimal.h"
#include "UVGEQT_DistanceDifferenceFilter.generated.h"

UENUM(BlueprintType)
enum class UVGEQT_DistanceDifferenceFilter : uint8 {
    Off,
    CutOver,
    CutUnder,
    Num,
};

