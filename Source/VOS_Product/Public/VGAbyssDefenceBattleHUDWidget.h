#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGAbyssDefenceBattleHUDWidget.generated.h"

class UVGHudSummon;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGAbyssDefenceBattleHUDWidget : public UVGWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGHudSummon* m_HudSummon;
    
public:
    UVGAbyssDefenceBattleHUDWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OpenSummon();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CloseSummon();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

