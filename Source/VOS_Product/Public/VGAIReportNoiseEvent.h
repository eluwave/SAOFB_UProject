#pragma once
#include "CoreMinimal.h"
#include "EVGAINoiseType.h"
#include "VGAIReportNoiseEvent.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAIReportNoiseEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGAINoiseType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName node_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Loudness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float max_range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName tag;
    
    FVGAIReportNoiseEvent();
};

