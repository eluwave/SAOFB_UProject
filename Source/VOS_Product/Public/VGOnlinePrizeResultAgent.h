#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGTextSymbol.h"
#include "VGUIActor.h"
#include "VGOnlinePrizeResultAgent.generated.h"

class UVGPrizeResultWidget;
class UVGWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGOnlinePrizeResultAgent : public AVGUIActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGPrizeResultWidget> m_prize_result_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGWidget> m_level_up_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_level_up_draw_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_get_customize_point_text;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGPrizeResultWidget* m_prize_result_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_level_up_widget;
    
public:
    AVGOnlinePrizeResultAgent(const FObjectInitializer& ObjectInitializer);

};

