#pragma once
#include "CoreMinimal.h"
#include "EVGCoopVisualLobbyHudState.h"
#include "Templates/SubclassOf.h"
#include "VGCoopVisualLobbyNavigationBarSetting.h"
#include "VGUIActor.h"
#include "VGCoopVisualLobbyHudAgent.generated.h"

class UVGVisualLobbyHUDWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGCoopVisualLobbyHudAgent : public AVGUIActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGVisualLobbyHUDWidget* m_visual_lobby_hud_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGVisualLobbyHUDWidget> m_visual_lobby_hud_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVGCoopVisualLobbyHudState, FVGCoopVisualLobbyNavigationBarSetting> m_nav_content_settings;
    
public:
    AVGCoopVisualLobbyHudAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTimerText(const FText& LogLine);
    
    UFUNCTION(BlueprintCallable)
    void SetLogWindowVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void OpenLogWindow();
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void CloseLogWindow();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void ChangeHudState(const EVGCoopVisualLobbyHudState& NewState);
    
    UFUNCTION(BlueprintCallable)
    void AddLog(const FText& LogLine);
    
};

