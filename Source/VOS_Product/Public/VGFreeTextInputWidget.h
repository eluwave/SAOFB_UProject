#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGFreeTextInputWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGFreeTextInputWidget : public UVGWidget {
    GENERATED_BODY()
public:
    UVGFreeTextInputWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void QueryClose();
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

