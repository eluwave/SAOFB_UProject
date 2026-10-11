#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyle.h"
#include "VGWidgetSoundRecord.h"
#include "VGUISoundStyle.generated.h"

USTRUCT(BlueprintType)
struct FVGUISoundStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGWidgetSoundRecord default_sounds[106];
    
    VOS_PRODUCT_API FVGUISoundStyle();
};

