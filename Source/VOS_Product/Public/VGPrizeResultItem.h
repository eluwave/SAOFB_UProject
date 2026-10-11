#pragma once
#include "CoreMinimal.h"
#include "VGGridViewItem.h"
#include "VGPrizeResultItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGPrizeResultItem : public UVGGridViewItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_count_up_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<bool> m_is_count_up_enable;
    
public:
    UVGPrizeResultItem();

    UFUNCTION(BlueprintCallable)
    void PlayAnimeEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayPrizeInAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayOutAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayInAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayCountUpEndAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAmountInAnime();
    
    UFUNCTION(BlueprintCallable)
    bool IsSkip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPrize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmount() const;
    
};

