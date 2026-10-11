#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGStatusMoney.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGStatusMoney : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_money_value;
    
public:
    UVGStatusMoney();

    UFUNCTION(BlueprintCallable)
    void SetMoneyValue(int32 value);
    
};

