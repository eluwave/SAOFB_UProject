#pragma once
#include "CoreMinimal.h"
#include "VGSummonParam.generated.h"

class UVGVfxSignalAsset;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSummonParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName spawner_tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGVfxSignalAsset* signal;
    
    FVGSummonParam();
};

