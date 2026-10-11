#pragma once
#include "CoreMinimal.h"
#include "VGSaveInventoryItemEntry.h"
#include "VGSaveInventoryItemNPC.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSaveInventoryItemNPC {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveInventoryItemEntry> entries;
    
    FVGSaveInventoryItemNPC();
};

