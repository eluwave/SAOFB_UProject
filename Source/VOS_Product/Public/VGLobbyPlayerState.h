#pragma once
#include "CoreMinimal.h"
#include "VGOnlinePlayerState.h"
#include "VGPlayerCardData.h"
#include "VGPlayerSetting.h"
#include "VGLobbyPlayerState.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGLobbyPlayerState : public AVGOnlinePlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerSetting, meta=(AllowPrivateAccess=true))
    FVGPlayerSetting m_setting;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_is_last_ready;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerCard, meta=(AllowPrivateAccess=true))
    FVGPlayerCardData m_player_card_data;
    
public:
    AVGLobbyPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetSetting(FVGPlayerSetting setting);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetReadyApplyed(bool is_applyed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetPlayerCard(FVGPlayerCardData Card);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetLastReady(bool is_enable);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SendFreeInputText(const FString& Name, const FString& String, const FString& unique_id);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeSetting(FVGPlayerSetting setting);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerSetting();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerCard();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetFreeInputText(const FString& Name, const FString& String, const FString& unique_id);
    
};

