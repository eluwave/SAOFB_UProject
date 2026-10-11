#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGAfasysBankMoneyRate.h"
#include "VGAfasysFundOperation.h"
#include "VGAfasysShoping.h"
#include "VGAfasysShopingItemGrandTotalPocketMoneyBonus.h"
#include "VGAfasysShopingPriorityItem.h"
#include "VGAfasysFundManagementAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGAfasysFundManagementAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysShoping> shopings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysShopingPriorityItem> priority_items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysBankMoneyRate> bank_money_rates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysFundOperation> operations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysShopingItemGrandTotalPocketMoneyBonus> shoping_item_bonus;
    
    UVGAfasysFundManagementAsset();

};

