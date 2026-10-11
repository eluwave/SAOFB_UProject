#pragma once
#include "CoreMinimal.h"
#include "Misc/StringClassReference.h"
#include "EVGCharaTeam.h"
#include "EVGQuestCategory.h"
#include "VGHeroStrugglePlayerListItemInfo.h"
#include "VGRoamHUD.h"
#include "VGVisualLobbyPlayerListItemInfo.h"
#include "VisualLobbyCustomizeSlotCompleteDelegateDelegate.h"
#include "VisualLobbyLeaveRoomRequestDelegateDelegate.h"
#include "VisualLobbyLoadedCompleteDelegateDelegate.h"
#include "VisualLobbyReadyCheckStatusChangeDelegateDelegate.h"
#include "VisualLobbyReadyCheckTimerCompleteDelegateDelegate.h"
#include "VGVisualLobbyHUD.generated.h"

class AVGCoopVisualLobbyHudAgent;
class AVGHSCharacterSelectAgent;
class AVGVisualLobbyMenuAgent;

UCLASS(Blueprintable, NonTransient)
class AVGVisualLobbyHUD : public AVGRoamHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisualLobbyReadyCheckTimerCompleteDelegate OnReadyCheckTimerCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisualLobbyReadyCheckStatusChangeDelegate OnReadyCheckStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisualLobbyLeaveRoomRequestDelegate OnLeaveRoomRequestDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisualLobbyLoadedCompleteDelegate OnLoadedCompletedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisualLobbyCustomizeSlotCompleteDelegate OnCustomizeSlotEndedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGCoopVisualLobbyHudAgent* m_visual_lobby_hud_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_visual_lobby_hud_agent_class_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGVisualLobbyMenuAgent* m_visual_lobby_menu_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_visual_lobby_menu_agent_class_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_hero_select_agent_class_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGHSCharacterSelectAgent* m_hero_select_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGVisualLobbyPlayerListItemInfo> m_player_info_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGHeroStrugglePlayerListItemInfo> m_alpha_team_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGHeroStrugglePlayerListItemInfo> m_bravo_team_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> m_unhandled_logs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_quest_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_quest_display_text;
    
public:
    AVGVisualLobbyHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnsetQuest();
    
    UFUNCTION(BlueprintCallable)
    void SyncStart();
    
    UFUNCTION(BlueprintCallable)
    void SyncRollback();
    
    UFUNCTION(BlueprintCallable)
    void StartTimer(float TimerCount);
    
    UFUNCTION(BlueprintCallable)
    void SetQuest(const FName& QuestID, const FText& QuestDisplayText, EVGQuestCategory::Type Category);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayers(const TArray<FVGVisualLobbyPlayerListItemInfo>& PlayerInfo);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayers();
    
    UFUNCTION(BlueprintCallable)
    void OnMenuOpenStatusChanged(bool IsOpened);
    
    UFUNCTION(BlueprintCallable)
    void ChangeTeamFormation(EVGCharaTeam newTeam, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void CancelTimer();
    
    UFUNCTION(BlueprintCallable)
    void AddLog(const FText& LogLine);
    
};

