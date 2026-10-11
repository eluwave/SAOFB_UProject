#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGHudRuleConquest.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudRuleConquest : public UVGWidget {
    GENERATED_BODY()
public:
    UVGHudRuleConquest();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTeamsName(const FText& name1, const FText& name2);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDamageRate(float alpha, float beta);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

