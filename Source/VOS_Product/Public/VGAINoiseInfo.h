#pragma once
#include "CoreMinimal.h"
#include "EVGAINoiseType.h"
#include "VGAINoiseInfo.generated.h"

USTRUCT(BlueprintType)
struct FVGAINoiseInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGAINoiseType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Loudness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName tag;
    
    VOS_PRODUCT_API FVGAINoiseInfo();
};

