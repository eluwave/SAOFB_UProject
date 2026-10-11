#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VGSaveError.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGSaveError : public UUserWidget {
    GENERATED_BODY()
public:
    UVGSaveError();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSaveIconVisibility(bool b_is_visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSaveErrorVisibility(bool b_is_visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open(float seconds);
    
};

