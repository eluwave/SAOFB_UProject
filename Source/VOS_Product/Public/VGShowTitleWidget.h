#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGShowTitleWidget.generated.h"

class UVGGridView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGShowTitleWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_gv_main;
    
public:
    UVGShowTitleWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndTitle();
    
};

