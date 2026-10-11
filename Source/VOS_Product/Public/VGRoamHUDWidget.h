#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VGRoamHUDWidget.generated.h"

class UCanvasPanel;
class UVGHudLogWindow;
class UVGHudMiniMap;
class UVGHudSubtitles;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGRoamHUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_RootCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGHudLogWindow* m_HudLogWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGHudMiniMap* m_HudMiniMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGHudSubtitles* m_HudSubtitles;
    
public:
    UVGRoamHUDWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGHudSubtitles* GetSubtitles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGHudLogWindow* GetLogWindow() const;
    
};

