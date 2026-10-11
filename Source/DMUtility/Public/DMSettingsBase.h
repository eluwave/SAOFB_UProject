#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "DMSettingsBase.generated.h"

UCLASS(Abstract, Blueprintable, DefaultConfig, Config=Game)
class DMUTILITY_API UDMSettingsBase : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UDMSettingsBase();

};

