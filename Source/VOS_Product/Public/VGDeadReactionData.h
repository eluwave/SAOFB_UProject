#pragma once
#include "CoreMinimal.h"
#include "VGDeadCondition.h"
#include "VGDeadReactionData.generated.h"

USTRUCT(BlueprintType)
struct FVGDeadReactionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGDeadCondition condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    VOS_PRODUCT_API FVGDeadReactionData();
};

