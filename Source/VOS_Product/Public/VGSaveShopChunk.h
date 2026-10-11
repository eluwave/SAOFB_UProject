#pragma once
#include "CoreMinimal.h"
#include "VGSaveShopInventoryData.h"
#include "VGSaveShopChunk.generated.h"

USTRUCT(BlueprintType)
struct FVGSaveShopChunk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveShopInventoryData> inventories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 weapon_shop_level;
    
    VOS_PRODUCT_API FVGSaveShopChunk();
};

