#pragma once
#include "CoreMinimal.h"
#include "VGUnitDeleteTimer.generated.h"

class UVGAIUnit;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGUnitDeleteTimer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAIUnit* unit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_alarmed;
    
    FVGUnitDeleteTimer();
};

