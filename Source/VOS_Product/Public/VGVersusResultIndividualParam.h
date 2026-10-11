#pragma once
#include "CoreMinimal.h"
#include "VGNetworkResultIndividualParam.h"
#include "VGVersusResultIndividualParam.generated.h"

USTRUCT(BlueprintType)
struct FVGVersusResultIndividualParam : public FVGNetworkResultIndividualParam {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGVersusResultIndividualParam();
};

