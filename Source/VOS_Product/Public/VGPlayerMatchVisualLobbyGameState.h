#pragma once
#include "CoreMinimal.h"
#include "EVGBattleType.h"
#include "EVGQuestCategory.h"
#include "VGBattleOverwriteRuleParam.h"
#include "VGCharacterSetting.h"
#include "VGNWQuestSettingResultData.h"
#include "VGVisualLobbyGameState.h"
#include "VGVisualLobbyPlayerListItemInfo.h"
#include "VGPlayerMatchVisualLobbyGameState.generated.h"

class AVGVisualLobbyHUD;
class UVGGameEventStepSequence;
class UVGQuestRecord;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGPlayerMatchVisualLobbyGameState : public AVGVisualLobbyGameState {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OverwriteRuleParam, meta=(AllowPrivateAccess=true))
    FVGBattleOverwriteRuleParam m_overwrite_rule_param;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AVGVisualLobbyHUD> m_local_hud_weak_ptr;
    
public:
    AVGPlayerMatchVisualLobbyGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdatePlayer(const FVGVisualLobbyPlayerListItemInfo& PlayerListItemInfo);
    
private:
    UFUNCTION(BlueprintCallable)
    void StartSettingVersusContext();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetQuestCategory(EVGQuestCategory::Type quest_category);
    
    UFUNCTION(BlueprintCallable)
    void SetCountdownStatus(bool NewStatus);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetFixedPhrase(const FString& Name, const FName& ID, const FString& unique_id);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeTeamFormation(const TArray<FVGVisualLobbyPlayerListItemInfo>& NewTeamInfo);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayer(int32 PlayerId);
    
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
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OverwriteRuleParam();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOverwriteSettingChanged(bool is_overwrite, EVGBattleType quest_battle_type, const TArray<FVGNWQuestSettingResultData>& SettingParamaters);
    
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

