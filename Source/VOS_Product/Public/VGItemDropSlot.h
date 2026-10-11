#pragma once
#include "CoreMinimal.h"
#include "VGItemDrop.h"
#include "VGItemDropSlot.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGItemDropSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGItemDrop> item_list;
    
    FVGItemDropSlot();
};

