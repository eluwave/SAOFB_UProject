#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "EVGCharaRole.h"
#include "VGGridViewItem.h"
#include "VGVisualLobbyPlayerListItemInfo.h"
#include "VGVisualLobbyPlayerListItemWidget.generated.h"

class UTexture2D;
class UVGHeroIconLoader;
class UVGMarqueePanel;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGVisualLobbyPlayerListItemWidget : public UVGGridViewItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference UnknownsIconRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMarqueePanel* m_scroll_panel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGHeroIconLoader* m_hero_icon_loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_my_team_member;
    
public:
    UVGVisualLobbyPlayerListItemWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHeroIcon(int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVoiceState(int32 voice_state);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetReady(bool is_ready);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRankVisibled(bool is_visible);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerListItemInfo(const FVGVisualLobbyPlayerListItemInfo& PlayerListItemInfo, bool bIsOwn, bool is_my_team_member);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHeroChara(int32 index, const FText& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharaRoleIcon(EVGCharaRole CharaRole);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAntenaNum(int32 Num);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerListItemInfoUpdated(const FVGVisualLobbyPlayerListItemInfo& PlayerListItemInfo, bool bIsOwn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetHeroIcon(int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CursorOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CursorOff();
    
};

