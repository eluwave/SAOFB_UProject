#pragma once
#include "CoreMinimal.h"
#include "VGShopItemTableAsset.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGShopItemTableAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 progress_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString target_dlc;
    
    FVGShopItemTableAsset();
};

