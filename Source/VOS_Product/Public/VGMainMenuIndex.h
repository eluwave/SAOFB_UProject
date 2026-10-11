#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGMainMenuIndex.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGMainMenuIndex : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_Index_text;
    
public:
    UVGMainMenuIndex();

    UFUNCTION(BlueprintCallable)
    void SetText(FText in_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaySlideOutAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaySlideInAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaySelectAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayOutAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayInAnime();
    
};

