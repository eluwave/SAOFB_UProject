#pragma once
#include "CoreMinimal.h"
#include "VGNetworkResultIndividualParam.h"
#include "VGMissionResultIndividualParam.generated.h"

USTRUCT(BlueprintType)
struct FVGMissionResultIndividualParam : public FVGNetworkResultIndividualParam {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGMissionResultIndividualParam();
};

