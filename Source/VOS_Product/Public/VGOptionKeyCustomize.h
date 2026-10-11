#pragma once
#include "CoreMinimal.h"
#include "VGTextSymbol.h"
#include "VGWidget.h"
#include "VGOptionKeyCustomize.generated.h"

class UVGGridView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGOptionKeyCustomize : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_left_stick_control_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_right_stick_control_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_set_control_setting_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_return_default_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_key_list;
    
public:
    UVGOptionKeyCustomize();

    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void Close(bool bRemove);
    
};

