#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGDeadIconItem.h"
#include "VGMarkerWidgetItem.h"
#include "VGStatusWidgetItem.h"
#include "VGWidget.h"
#include "VGHudActorWidgetPanel.generated.h"

class UCanvasPanel;
class UVGHud3DStatus;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudActorWidgetPanel : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGWidget> m_marker_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_marker_widget_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGHud3DStatus> m_status_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_status_widget_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGWidget> m_dead_icon_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_dead_icon_num;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_widget_panel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMarkerWidgetItem> m_marker_widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGStatusWidgetItem> m_status_widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGDeadIconItem> m_dead_icons;
    
public:
    UVGHudActorWidgetPanel();

};

