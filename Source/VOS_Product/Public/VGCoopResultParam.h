#pragma once
#include "CoreMinimal.h"
#include "VGNetworkResultIndividualParam.h"
#include "VGCoopResultParam.generated.h"

USTRUCT(BlueprintType)
struct FVGCoopResultParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGNetworkResultIndividualParam> params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float clear_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_new_record;
    
    VOS_PRODUCT_API FVGCoopResultParam();
};

