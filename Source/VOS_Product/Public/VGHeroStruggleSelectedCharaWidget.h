#pragma once
#include "CoreMinimal.h"
#include "VGHeroStruggleCharaIconDisplayInfo.h"
#include "VGWidget.h"
#include "VGHeroStruggleSelectedCharaWidget.generated.h"

class UVGHeroStruggleWidget;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHeroStruggleSelectedCharaWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_skip_cursor_change_anim;
    
public:
    UVGHeroStruggleSelectedCharaWidget();

    UFUNCTION(BlueprintCallable)
    void SkipOnetimeCursorChangeAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVoiceState(int32 voice_state);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconData(const FVGHeroStruggleCharaIconDisplayInfo icon_data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHeroRank(const FText& OnlineHeroRank);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDisplayName(const FText& DisplayName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void QueryClose();
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancel();
    
    UFUNCTION(BlueprintCallable)
    void Init(UVGHeroStruggleWidget* HeroStruggleWidget);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

