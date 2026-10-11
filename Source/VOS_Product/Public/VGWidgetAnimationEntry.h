#pragma once
#include "CoreMinimal.h"
#include "VGWidgetAnimationEntry.generated.h"

class UWidgetAnimation;

USTRUCT(BlueprintType)
struct FVGWidgetAnimationEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Animation;
    
    VOS_PRODUCT_API FVGWidgetAnimationEntry();
};

