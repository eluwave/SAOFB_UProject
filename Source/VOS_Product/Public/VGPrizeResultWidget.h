#pragma once
#include "CoreMinimal.h"
#include "VGPrizeResultItemDisp.h"
#include "VGWidget.h"
#include "VGPrizeResultWidget.generated.h"

class UVGPrizeResultTabSet;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGPrizeResultWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGPrizeResultItemDisp> m_prize_result_disps;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGPrizeResultTabSet* m_result_tab_set;
    
public:
    UVGPrizeResultWidget();

};

