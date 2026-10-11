#pragma once
#include "CoreMinimal.h"
#include "VGAnimActionSlot.generated.h"

class UVGActionAsset;

USTRUCT(BlueprintType)
struct FVGAnimActionSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGActionAsset* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float blend_coeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float play_rate;
    
    VOS_PRODUCT_API FVGAnimActionSlot();
};

