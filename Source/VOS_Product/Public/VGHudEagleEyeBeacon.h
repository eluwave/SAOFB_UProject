#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGHudEagleEyeBeacon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudEagleEyeBeacon : public UVGWidget {
    GENERATED_BODY()
public:
    UVGHudEagleEyeBeacon();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenBeaconSonar();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenBeacon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseBeaconSonar();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseBeacon();
    
};

