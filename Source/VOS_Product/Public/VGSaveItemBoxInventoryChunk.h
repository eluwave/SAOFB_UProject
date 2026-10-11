#pragma once
#include "CoreMinimal.h"
#include "VGSaveInventoryItemEntry.h"
#include "VGSaveItemBoxInventoryChunk.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSaveItemBoxInventoryChunk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveInventoryItemEntry> item_box;
    
    FVGSaveItemBoxInventoryChunk();
};

