#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EVGShopTableAppendMode.h"
#include "VGShopInventoryData.generated.h"

class UDataTable;
class UVGInventoryData;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGShopInventoryData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGInventoryData* m_link_inventory;
    
    UVGShopInventoryData();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void AppendFromTable(const UObject* WorldContextObject, const UDataTable* Data, EVGShopTableAppendMode mode);
    
};

