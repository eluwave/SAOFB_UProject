#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyleContainerBase.h"
#include "VGUISoundStyle.h"
#include "VGUISoundWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UVGUISoundWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGUISoundStyle UISoundStyle;
    
    UVGUISoundWidgetStyle();

};

