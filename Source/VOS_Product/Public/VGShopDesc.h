#pragma once
#include "CoreMinimal.h"
#include "EVGShopService.h"
#include "VGShopDesc.generated.h"

class UVGShopInventoryData;

USTRUCT(BlueprintType)
struct FVGShopDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGShopService::Type> service;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText display_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText service_description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGShopInventoryData* inventory;
    
    VOS_PRODUCT_API FVGShopDesc();
};

