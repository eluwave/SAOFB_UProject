#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysMenuPriorityItem.h"
#include "VGAfasysShopingInfo.h"
#include "VGTextSymbol.h"
#include "VGAfasysShopingPriorityItem.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAfasysShopingPriorityItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysMenuPriorityItem::Type> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 voice_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysShopingInfo> infos;
    
    FVGAfasysShopingPriorityItem();
};

