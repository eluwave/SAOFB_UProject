#pragma once
#include "CoreMinimal.h"
#include "EVGPadKey.h"
#include "VGProbabilityInput.generated.h"

USTRUCT(BlueprintType)
struct FVGProbabilityInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EVGPadKey::Type>> Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float cooldown_point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool cooldown_current_target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float probability;
    
    VOS_PRODUCT_API FVGProbabilityInput();
};

