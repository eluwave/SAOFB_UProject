#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGNPCStatusEquipListWidget.generated.h"

class UVGNPCStatusGoodsInfoWidget;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGNPCStatusEquipListWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNPCStatusGoodsInfoWidget* m_main_arms1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNPCStatusGoodsInfoWidget* m_main_arms2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNPCStatusGoodsInfoWidget* m_sub_arms1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNPCStatusGoodsInfoWidget* m_sub_arms2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNPCStatusGoodsInfoWidget* m_costume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNPCStatusGoodsInfoWidget* m_accessories1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNPCStatusGoodsInfoWidget* m_accessories2;
    
public:
    UVGNPCStatusEquipListWidget();

};

