#pragma once
#include "CoreMinimal.h"
#include "EVGHudSatelliteState.h"
#include "VGTextSymbol.h"
#include "VGWidget.h"
#include "VGHudSatellite.generated.h"

class UVGBattleSatelliteComponent;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudSatellite : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_count_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_starting_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGHudSatelliteState m_state;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGBattleSatelliteComponent* m_satellite_component;
    
public:
    UVGHudSatellite();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIn();
    
};

