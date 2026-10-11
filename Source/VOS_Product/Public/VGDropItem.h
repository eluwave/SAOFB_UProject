#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EVGItemRarity.h"
#include "VGItemDropItem.h"
#include "VGDropItem.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGDropItem : public AActor {
    GENERATED_BODY()
public:
    AVGDropItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetForcePickupEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PickupItem(AActor* pickup_actor, AActor* timer_actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnreachedLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPickupEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsForcePickupEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSpecialEffectNum(int32& special_effect_num) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRarity(EVGItemRarity& rarity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetItemNum(int32& item_num) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetItemName(FName& item_name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetItemId(FName& item_id) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetItemData(FVGItemDropItem& itemData) const;
    
};

