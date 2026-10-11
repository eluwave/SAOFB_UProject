#pragma once
#include "CoreMinimal.h"
#include "VGNPCStatusInfoWidgetBase.h"
#include "VGNPCStatusAccessoriesInfoWidget.generated.h"

class UVGGridView;
class UVGNPCStatusGoodsInfoWidget;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGNPCStatusAccessoriesInfoWidget : public UVGNPCStatusInfoWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNPCStatusGoodsInfoWidget* m_accessories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_benefit_list;
    
public:
    UVGNPCStatusAccessoriesInfoWidget();

};

