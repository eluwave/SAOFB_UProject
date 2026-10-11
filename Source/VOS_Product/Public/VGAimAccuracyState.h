#pragma once
#include "CoreMinimal.h"
#include "EVGState.h"
#include "VGAimAccuracyState.generated.h"

USTRUCT(BlueprintType)
struct FVGAimAccuracyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGState::Type> State;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MIL;
    
    VOS_PRODUCT_API FVGAimAccuracyState();
};

