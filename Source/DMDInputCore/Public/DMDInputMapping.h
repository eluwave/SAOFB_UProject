#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "DIControllerConfiguration.h"
#include "DMDInputMapping.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Input)
class DMDINPUTCORE_API UDMDInputMapping : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDIControllerConfiguration> ControllerConfigurations;
    
public:
    UDMDInputMapping();

};

