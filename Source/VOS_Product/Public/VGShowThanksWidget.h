#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGShowThanksWidget.generated.h"

class UVGGridView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGShowThanksWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_gv_main;
    
public:
    UVGShowThanksWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndWidget();
    
};

