#pragma once
#include "CoreMinimal.h"

#include "UObject/Object.h"
#include "Misc/StringAssetReference.h"
#include "VGSpecialItemEntry.h"
#include "VGItemCatalogue.generated.h"

class UDataTable;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGItemCatalogue : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_item_spec_asset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> m_rarity_colors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_item_spec;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSpecialItemEntry> m_special_item_setting;
    
public:
    UVGItemCatalogue();

};

