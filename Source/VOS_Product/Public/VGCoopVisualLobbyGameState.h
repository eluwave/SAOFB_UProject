#pragma once
#include "CoreMinimal.h"
#include "EVGCharaUnique.h"
#include "EVGCoopQuestModeType.h"
#include "VGCharacterSetting.h"
#include "VGVisualLobbyGameState.h"
#include "VGVisualLobbyPlayerListItemInfo.h"
#include "VGCoopVisualLobbyGameState.generated.h"

class AVGVisualLobbyHUD;
class UVGGameEventStepSequence;
class UVGQuestRecord;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGCoopVisualLobbyGameState : public AVGVisualLobbyGameState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SetQuestId, meta=(AllowPrivateAccess=true))
    FName m_quest_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGQuestRecord* m_quest_record;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SetCountdownStatus, meta=(AllowPrivateAccess=true))
    bool m_countdown_status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SetNpcPool, meta=(AllowPrivateAccess=true))
    TArray<FVGCharacterSetting> m_npc_pool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 k_coop_battle_max_slot_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_timer_count;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AVGVisualLobbyHUD> m_local_hud_weak_ptr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGCharaUnique> m_coop_join_list;
    
public:
    AVGCoopVisualLobbyGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdatePlayer(const FVGVisualLobbyPlayerListItemInfo& PlayerListItemInfo);
    
private:
    UFUNCTION(BlueprintCallable)
    void StartSettingCoopContext();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCountdownStatus(bool NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetCoopQuestMode(EVGCoopQuestModeType coop_type);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetFixedPhrase(const FString& Name, const FName& ID, const FString& unique_id);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayer(int32 PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAfasys(int32 PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OpenQuestWidget(UVGGameEventStepSequence* ev);
    
    UFUNCTION(BlueprintCallable)
    void OpenQuestDetailWidget();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTerminalMenuEnded();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SetQuestId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetNpcPool();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetCountdownStatus();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLoadedComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnLeaveRoomRequested();
    
    UFUNCTION(BlueprintCallable)
    void OnHUDTimerCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnHUDReadyCheckStatusChanged(bool NewStatus);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_OnLeaveSessionCompleted(const TArray<int32>& LeaveMembers);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_OnLastSynchStarted();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
public:
    UFUNCTION(BlueprintCallable)
    FName GetQuestId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVGVisualLobbyHUD* GetLocalHud() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
public:
    UFUNCTION(BlueprintCallable)
    void EraseQuest();
    
    UFUNCTION(BlueprintCallable)
    void CloseQuestWidget();
    
private:
    UFUNCTION(BlueprintCallable)
    void ApplyQuestId();
    
};

