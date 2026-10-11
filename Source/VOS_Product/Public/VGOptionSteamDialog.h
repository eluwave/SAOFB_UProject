#pragma once
#include "CoreMinimal.h"
#include "VGDialog.h"
#include "VGOptionSteamDialog.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGOptionSteamDialog : public UVGDialog {
    GENERATED_BODY()
public:
    UVGOptionSteamDialog();

    UFUNCTION(BlueprintCallable)
    int32 GetAutoCloseTime();
    
};

