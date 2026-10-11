#pragma once
#include "CoreMinimal.h"
#include "DMSettingsBase.h"
#include "DMCommandCluster.h"
#include "DMDeveloperSettings.generated.h"

UCLASS(Blueprintable, Config=DevOnly)
class UDMDeveloperSettings : public UDMSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> ConsoleCommands;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> DesignatedMaps;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDMCommandCluster> CommandCluster;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSuppressPointer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bClickToMoveResize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableParallelCommanderTick;
    
    UDMDeveloperSettings();

};

