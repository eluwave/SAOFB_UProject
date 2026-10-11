#pragma once
#include "CoreMinimal.h"
#include "VGNPCStatusInfoWidgetBase.h"
#include "VGNPCSkillSetInfoWidget.generated.h"

class UVGNPCStatusGoodsInfoWidget;
class UVGWidget;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGNPCSkillSetInfoWidget : public UVGNPCStatusInfoWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNPCStatusGoodsInfoWidget* m_arms1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNPCStatusGoodsInfoWidget* m_arms2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_skill_set;
    
public:
    UVGNPCSkillSetInfoWidget();

};

