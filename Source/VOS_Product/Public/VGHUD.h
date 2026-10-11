#pragma once
#include "CoreMinimal.h"
#include "VGHUDBase.h"
#include "VGHudDebugStringInfo.h"
#include "VGHUD.generated.h"

class UWidget;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class VOS_PRODUCT_API AVGHUD : public AVGHUDBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DefaultHUDVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGHudDebugStringInfo> m_debug_string_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> m_focus_widgets;
    
public:
    AVGHUD(const FObjectInitializer& ObjectInitializer);

};

