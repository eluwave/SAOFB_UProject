#pragma once
#include "CoreMinimal.h"
#include "VGLobbyPlayerState.h"
#include "VGPlayerSetting.h"
#include "VGVisualLobbyPlayerState.generated.h"

class AVGCharacter;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGVisualLobbyPlayerState : public AVGLobbyPlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AVGCharacter* m_character;
    
public:
    AVGVisualLobbyPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetSetting(FVGPlayerSetting setting);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetCharacter(AVGCharacter* Chara);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeSetting(FVGPlayerSetting setting);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerSetting();
    
};

