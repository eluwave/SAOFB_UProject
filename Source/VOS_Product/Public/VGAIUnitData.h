#pragma once
#include "CoreMinimal.h"
#include "VGAIUnitInfo.h"
#include "VGAIUnitData.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAIUnitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAIUnitInfo Info;
    
    FVGAIUnitData();
};

