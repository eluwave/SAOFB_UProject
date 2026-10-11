#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VGRoamBackHUDWidget.generated.h"

class UCanvasPanel;
class UVGHudActorWidgetPanel;
class UVGHudTargetIconPanel;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGRoamBackHUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_RootCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGHudTargetIconPanel* m_HudTargetIconPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGHudActorWidgetPanel* m_HudActorWidgetPanel;
    
public:
    UVGRoamBackHUDWidget();

    UFUNCTION(BlueprintCallable)
    void Set3DHudVisibilityByEvent(bool is_visible);
    
};

