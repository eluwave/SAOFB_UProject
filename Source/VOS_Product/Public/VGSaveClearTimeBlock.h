#pragma once
#include "CoreMinimal.h"
#include "VGSaveClearTimeBlock.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSaveClearTimeBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_clear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 clear_time;
    
    FVGSaveClearTimeBlock();
};

