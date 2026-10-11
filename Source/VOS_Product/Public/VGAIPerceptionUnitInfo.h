#pragma once
#include "CoreMinimal.h"
#include "VGAIUnitInfo.h"
#include "VGAIPerceptionUnitInfo.generated.h"

class UVGAIUnit;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAIPerceptionUnitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAIUnit* unit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAIUnitInfo Info;
    
    FVGAIPerceptionUnitInfo();
};

