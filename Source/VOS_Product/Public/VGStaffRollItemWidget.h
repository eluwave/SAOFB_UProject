#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGStaffRollItemWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGStaffRollItemWidget : public UVGWidget {
    GENERATED_BODY()
public:
    UVGStaffRollItemWidget();

    UFUNCTION(BlueprintCallable)
    void Open(float start_time);
    
    UFUNCTION(BlueprintCallable)
    FString GetSystemLanguage();
    
};

