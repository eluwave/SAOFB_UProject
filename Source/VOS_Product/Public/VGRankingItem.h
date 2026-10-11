#pragma once
#include "CoreMinimal.h"
#include "EVGRegion.h"
#include "VGGridViewItem.h"
#include "VGRankingItem.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGRankingItem : public UVGGridViewItem {
    GENERATED_BODY()
public:
    UVGRankingItem();

    UFUNCTION(BlueprintCallable)
    void PlayAnimeEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetRegion();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetRank(int32 rank);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetClearTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayPlayerAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayOutAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayInAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGRegion::Type GetRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPrize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetFaceTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClearTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCharacterName() const;
    
};

