#pragma once
#include "CoreMinimal.h"
#include "VGAIDistanceHate.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAIDistanceHate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Hate;
    
    FVGAIDistanceHate();
};

