#pragma once
#include "CoreMinimal.h"
#include "Components/CanvasPanel.h"
#include "Components/Widget.h"
#include "VGMarqueePanel.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMarqueePanel : public UCanvasPanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enable_scroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetBool m_enable_scrollDelegate;
    
    UVGMarqueePanel();

    UFUNCTION(BlueprintCallable)
    void ResetScroll();
    
};

