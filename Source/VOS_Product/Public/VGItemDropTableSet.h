#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGItemDropTableElement.h"
#include "VGItemDropTableSet.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGItemDropTableSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGItemDropTableElement> m_item_drop_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_item_drop_to_inventory;
    
    UVGItemDropTableSet();

};

