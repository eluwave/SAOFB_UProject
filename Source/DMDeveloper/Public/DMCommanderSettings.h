#pragma once
#include "CoreMinimal.h"
#include "Misc/StringClassReference.h"
#include "DMSettingsBase.h"
#include "DMCategorizedCommander.h"
#include "DMCommanderSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=DevOnly)
class UDMCommanderSettings : public UDMSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringClassReference> Commanders;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDMCategorizedCommander> CategorizedCommanders;
    
    UDMCommanderSettings();

};

