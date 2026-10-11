#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyleContainerBase.h"
#include "VGInlineTextImageStyle.h"
#include "VGInlineTextImageWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UVGInlineTextImageWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGInlineTextImageStyle InlineTextImageStyle;
    
    UVGInlineTextImageWidgetStyle();

};

