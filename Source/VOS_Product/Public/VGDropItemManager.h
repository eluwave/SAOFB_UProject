#pragma once
#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "EVGItemRarity.h"
#include "VGDropItemManager.generated.h"

class AVGDropItem;
class AVGPlayer;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGDropItemManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_max_drop_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pickup_radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AVGDropItem*> m_drop_item_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AVGDropItem*> m_pending_destroy_drop_items;
    
public:
    AVGDropItemManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisible(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void PickupDropItem(AVGDropItem* DropItem, AVGPlayer* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRarityColor(EVGItemRarity rarity, FLinearColor& Color) const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckUnreachedLocation(AVGDropItem* DropItem, const FVector& Position);
    
};

