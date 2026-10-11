#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGGoodsListItemParam.h"
#include "VGUIActor.h"
#include "VGGoodsListAgent.generated.h"

class UVGGoodsListWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGoodsListAgent : public AVGUIActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGGoodsListWidget> goodslist_widget_class;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGoodsListWidget* m_goodslist_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGoodsListItemParam> m_goods_param;
    
public:
    AVGGoodsListAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Start();
    
};

