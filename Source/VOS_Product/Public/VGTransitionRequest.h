#pragma once
#include "CoreMinimal.h"
#include "VGTransitionDescBP.h"
#include "VGTransitionRequest.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGTransitionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTransitionDescBP desc;
    
    FVGTransitionRequest();
};

