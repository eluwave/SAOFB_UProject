#pragma once
#include "CoreMinimal.h"

#include "VGTextSymbol.h"
#include "VGWidget.h"
#include "VGAfasysMenuAmIptValue.generated.h"

class UVGGridView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGAfasysMenuAmIptValue : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor m_default_text_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor m_chnage_text_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_pocket_money_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_deposits_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_withdrawals_text;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_num_list;
    
public:
    UVGAfasysMenuAmIptValue();

    UFUNCTION(BlueprintCallable)
    void StartMoneyControl();
    
    UFUNCTION(BlueprintCallable)
    bool IsMoneyControl();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMoney();
    
    UFUNCTION(BlueprintCallable)
    void EndMoneyControl(bool is_decide);
    
};

