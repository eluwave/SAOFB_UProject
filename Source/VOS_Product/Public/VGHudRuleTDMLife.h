#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGHudRuleTDMLife.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudRuleTDMLife : public UVGWidget {
    GENERATED_BODY()
public:
    UVGHudRuleTDMLife();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRespawnRight(int32 value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRespawnLeft(int32 value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeAlphaBravo(bool change);
    
};

