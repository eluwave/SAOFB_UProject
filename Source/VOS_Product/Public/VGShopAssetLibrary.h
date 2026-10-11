#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Misc/StringAssetReference.h"
#include "VGShopAssetLibrary.generated.h"

class UObjectLibrary;
class UVGShopAsset;
class UVGShopAssetLibrary;
class UVGShopInventoryAsset;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGShopAssetLibrary : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectLibrary* m_lib_shop_inv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FStringAssetReference> m_shop_inv_data_map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectLibrary* m_lib_shop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FStringAssetReference> m_shop_data_map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectLibrary* m_lib_weapon_reinforce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectLibrary* m_lib_info_item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectLibrary* m_lib_make_costume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectLibrary* m_lib_accessory_reinforce;
    
public:
    UVGShopAssetLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UVGShopAssetLibrary* Get();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGShopInventoryAsset* FindShopInventoryAsset(FName Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGShopAsset* FindShopAsset(FName Name) const;
    
};

