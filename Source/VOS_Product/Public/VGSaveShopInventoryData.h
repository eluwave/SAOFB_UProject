#pragma once
#include "CoreMinimal.h"
#include "VGSaveInventoryItemEntry.h"
#include "VGSaveShopInventoryItem.h"
#include "VGSaveShopInventoryData.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSaveShopInventoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName uid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 last_updated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_update_request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveShopInventoryItem> shop_items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveInventoryItemEntry> Items;
    
    FVGSaveShopInventoryData();
};

