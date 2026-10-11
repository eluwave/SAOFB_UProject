#pragma once
#include "CoreMinimal.h"
#include "VGInputMask.generated.h"

USTRUCT(BlueprintType)
struct FVGInputMask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Mask;
    
    VOS_PRODUCT_API FVGInputMask();
};

