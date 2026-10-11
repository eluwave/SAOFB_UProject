#pragma once
#include "CoreMinimal.h"
#include "VGLobbyPlayerState.h"
#include "VGPlayerSetting.h"
#include "VGRankMatchPlayerState.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGRankMatchPlayerState : public AVGLobbyPlayerState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReadyCheckStatus, meta=(AllowPrivateAccess=true))
    bool m_ready_check_status;
    
public:
    AVGRankMatchPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SendFixedPhrase(const FString& Name, const FName& ID, const FString& unique_id);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeSetting(FVGPlayerSetting setting);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeReadyCheckStatus(bool NewStatus, bool is_ready_applyed);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReadyCheckStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerSetting();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnlineRank();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeReadyCheckStatus(bool NewStatus);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetFixedPhrase(const FString& Name, const FName& ID, const FString& unique_id);
    
};

