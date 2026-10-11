#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGMapIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGMapIcon : public UVGWidget {
    GENERATED_BODY()
public:
    UVGMapIcon();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSubTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNormalTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMainTarget();
    
};

