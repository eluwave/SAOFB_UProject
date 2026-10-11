#pragma once
#include "CoreMinimal.h"
#include "VGGameplayData.h"
#include "VGShopData.generated.h"

class UObject;
class UVGShopInventoryData;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGShopData : public UVGGameplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGShopInventoryData*> m_shops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_weapon_shop_level;
    
    UVGShopData();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UVGShopInventoryData* FindShopInventoryData(const UObject* WorldContextObject, FName ID);
    
};

