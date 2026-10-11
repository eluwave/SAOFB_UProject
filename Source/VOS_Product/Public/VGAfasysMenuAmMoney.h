#pragma once
#include "CoreMinimal.h"

#include "EVGAfasysMenuAmMoneyView.h"
#include "EVGAfasysMenuDepositsMode.h"
#include "EVGAfasysMenuFunction.h"
#include "VGTextSymbol.h"
#include "VGWidget.h"
#include "VGAfasysMenuAmMoney.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGAfasysMenuAmMoney : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_count_up_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_money_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_deposit_money_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_afasys_money_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_grand_total_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor m_default_text_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor m_decrease_text_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor m_increase_text_color;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_total_money_view;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_top_money_view;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_bottom_money_view;
    
public:
    UVGAfasysMenuAmMoney();

    UFUNCTION(BlueprintCallable)
    void SetFunctionMode(EVGAfasysMenuFunction::Type mode);
    
    UFUNCTION(BlueprintCallable)
    void SetDepositMode(EVGAfasysMenuDepositsMode::Type mode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTextColor(EVGAfasysMenuAmMoneyView::Type index, FColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartMoneyMove();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartMoneyEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoneyMove() const;
    
    UFUNCTION(BlueprintCallable)
    EVGAfasysMenuDepositsMode::Type GetDepositMode();
    
};

