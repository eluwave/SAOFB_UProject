#pragma once
#include "CoreMinimal.h"
#include "VGWidgetAnimationEntry.h"
#include "VGWidgetAnimationGroup.generated.h"

class UUMGSequencePlayer;
class UVGWidget;

USTRUCT(BlueprintType)
struct FVGWidgetAnimationGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUMGSequencePlayer* AnimPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGWidgetAnimationEntry> RequestQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVGWidget*> CurrentWidgets;
    
    VOS_PRODUCT_API FVGWidgetAnimationGroup();
};

