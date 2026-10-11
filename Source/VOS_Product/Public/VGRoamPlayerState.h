#pragma once
#include "CoreMinimal.h"
#include "VGAfasysSetting.h"
#include "VGPlayerSetting.h"
#include "VGPlayerState.h"
#include "VGRoamPlayerState.generated.h"

class ANavigationData;
class AVGCharacter;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGRoamPlayerState : public AVGPlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AVGCharacter* m_character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVGPlayerSetting m_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AVGCharacter* m_afasys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVGAfasysSetting m_afasys_setting;
    
public:
    AVGRoamPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetSetting(FVGPlayerSetting setting);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetCharacter(AVGCharacter* Chara);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetAfasysSetting(FVGAfasysSetting setting);
    
    UFUNCTION(BlueprintCallable)
    void onNavigationGenerationFinished(ANavigationData* NavData);
    
};

