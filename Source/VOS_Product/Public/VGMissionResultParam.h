#pragma once
#include "CoreMinimal.h"
#include "VGMissionResultParam.generated.h"

USTRUCT(BlueprintType)
struct FVGMissionResultParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float clear_time;
    
    VOS_PRODUCT_API FVGMissionResultParam();
};

