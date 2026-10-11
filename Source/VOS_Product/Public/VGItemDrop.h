#pragma once
#include "CoreMinimal.h"
#include "VGItemDrop.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGItemDrop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 num_min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 num_max;
    
    FVGItemDrop();
};

