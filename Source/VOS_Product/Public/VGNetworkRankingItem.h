#pragma once
#include "CoreMinimal.h"
#include "EVGRegion.h"
#include "VGGridViewItem.h"
#include "VGTextSymbol.h"
#include "VGNetworkRankingItem.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGNetworkRankingItem : public UVGGridViewItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol EmptyText;
    
    UVGNetworkRankingItem();

    UFUNCTION(BlueprintCallable)
    void TabChangeStartAnimationEnd();
    
    UFUNCTION(BlueprintCallable)
    void TabChangeEndAnimationEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHeroCharaIcon(int32 index);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimeEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetSelectAnim(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetRegion();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetRank(int32 rank);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPocketMoney();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetEmptyData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetClearTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayTabChangeStartAnime(FName LR);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayTabChangeEndAnime(FName LR);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayPlayerAnime(bool IsPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayOutAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayInAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGRegion::Type GetRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPrize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerNum() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetHeroCharaIcon(int32 index);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetFaceTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClearTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCharacterName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAfasysPocketMoney() const;
    
};

