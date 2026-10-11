#pragma once
#include "CoreMinimal.h"
#include "EVGHudGoodActionState.h"
#include "VGHudGoodActionInfo.h"
#include "VGWidget.h"
#include "VGHudGoodAction.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudGoodAction : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGHudGoodActionState m_state;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_chara_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGHudGoodActionInfo> m_good_action_list;
    
public:
    UVGHudGoodAction();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

