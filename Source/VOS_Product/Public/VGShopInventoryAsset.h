#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGShopItemTableAsset.h"
#include "VGShopInventoryAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGShopInventoryAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName uid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> tables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGShopItemTableAsset> progress_tables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGShopItemTableAsset> append_tables;
    
    UVGShopInventoryAsset();

};

