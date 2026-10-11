#pragma once
#include "CoreMinimal.h"
#include "VGLobbyPlayerState.h"
#include "VGPlayerSetting.h"
#include "VGHeroRankMatchPlayerState.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGHeroRankMatchPlayerState : public AVGLobbyPlayerState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReadyCheckStatus, meta=(AllowPrivateAccess=true))
    bool m_ready_check_status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HeroSetting, meta=(AllowPrivateAccess=true))
    FVGPlayerSetting m_hero_setting;
    
public:
    AVGHeroRankMatchPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetHeroSetting(FVGPlayerSetting HeroSetting);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SendFixedPhrase(const FString& Name, const FName& ID, const FString& unique_id);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SelectHeroIndex(int32 ChangePlayerId, int32 HeroIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_HeroReadyChanged(int32 ChangePlayerId, int32 SelectIndex, bool IsReady);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeReadyCheckStatus(bool NewStatus, bool is_ready_applyed);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReadyCheckStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnlineRank();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HeroSetting();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeReadyCheckStatus(bool NewStatus);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetFixedPhrase(const FString& Name, const FName& ID, const FString& unique_id);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SelectHeroIndex(int32 ChangePlayerId, int32 HeroIndex);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HeroReadyChanged(int32 ChangePlayerId, int32 SelectIndex, bool IsReady);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_FixupCharacterSelect();
    
};

