#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGVisualLobbyHUDWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGVisualLobbyHUDWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_hud_zorder;
    
public:
    UVGVisualLobbyHUDWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimerText(const FText& LogLine);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLogWindowVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenLogWindow();
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseLogWindow();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddLog(const FText& LogLine);
    
};

