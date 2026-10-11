#pragma once
#include "CoreMinimal.h"
#include "VGNetworkResultIndividualParam.h"
#include "VGCoopResultIndividualParam.generated.h"

USTRUCT(BlueprintType)
struct FVGCoopResultIndividualParam : public FVGNetworkResultIndividualParam {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGCoopResultIndividualParam();
};

