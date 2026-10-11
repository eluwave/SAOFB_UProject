#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGShopAgent.h"
#include "VGTextSymbol.h"
#include "VGAccessoryShopAgent.generated.h"

class UVGAccessoryCustomizeWidget;
class UVGAccessoryReinforceWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAccessoryShopAgent : public AVGShopAgent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGAccessoryReinforceWidget> m_accessory_reinforce_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGAccessoryCustomizeWidget> m_accessory_customize_widget_class;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_help_text_reinforce[5];
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGAccessoryReinforceWidget* m_reinforce_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGAccessoryCustomizeWidget* m_customize_widget;
    
public:
    AVGAccessoryShopAgent(const FObjectInitializer& ObjectInitializer);

};

