#pragma once
#include "CoreMinimal.h"
#include "EVGCharaTeam.h"
#include "EVGPadKey.h"
#include "EVGVisualLobbyActionItemType.h"
#include "EVGVisualLobbyMenuMode.h"
#include "EVGVisualLobbyNetMode.h"
#include "Templates/SubclassOf.h"
#include "VGGridItem.h"
#include "VGTextSymbol.h"
#include "VGVisualLobbyActionListEntry.h"
#include "VGVisualLobbyPlayerListItemInfo.h"
#include "VGVisualLobbySubMenuActionListEntry.h"
#include "VGWidget.h"
#include "VGVisualLobbyMenuWidget.generated.h"

class AVGCustomizeSlotAgent;
class AVGFriendListAgent;
class AVGVisualLobbyTeamSetAgent;
class UUserWidget;
class UVGDialog;
class UVGGridView;
class UVGHeroIconLoader;
class UVGMainMenuList;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGVisualLobbyMenuWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_default_quest_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_quest_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_first_player_list_team_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_second_player_list_team_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGVisualLobbyActionListEntry> m_actionlist_entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGVisualLobbySubMenuActionListEntry> m_sub_list_entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGVisualLobbyPlayerListItemInfo> m_players_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_player_ids_sort_by_ui;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGVisualLobbyMenuMode m_menu_mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGCustomizeSlotAgent> m_customize_slot_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGVisualLobbyTeamSetAgent> m_team_set_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGFriendListAgent> m_friend_list_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGFriendListAgent* m_friend_list_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGDialog> m_blur_effect_ui_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_menu_state_flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_max_slot_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool k_is_need_chat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_hide_second_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMainMenuList* m_action_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* m_first_list_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* m_second_list_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_first_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_second_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGridItem> m_items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGCustomizeSlotAgent* m_customize_slot_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGVisualLobbyTeamSetAgent* m_team_set_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_member_list_window;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGHeroIconLoader* m_hero_icon_loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGVisualLobbyMenuMode> m_cache_menu_mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_display_hero_icon;
    
public:
    UVGVisualLobbyMenuWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateButtonEnableStates(bool ApplyImmediately);
    
    UFUNCTION(BlueprintCallable)
    void UnsetQuestText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TopOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TopClose();
    
    UFUNCTION(BlueprintCallable)
    void ToggleMemberList();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityMemberListHeader(bool is_visible);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetQuestText(const FText& QuestName);
    
    UFUNCTION(BlueprintCallable)
    void SetQuestID(const FName& QuestID);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayers(const TArray<FVGVisualLobbyPlayerListItemInfo>& entries);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerPlayerId(int32 PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SetCloseButton(EVGPadKey::Type btn);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayers();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void QuestTextUpdated(const FText& NewQuestText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerNumSet(int32 PlayerNum);
    
public:
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void NotifySyncPhase(bool Start);
    
    UFUNCTION(BlueprintCallable)
    void NotifyCountdown(bool Start);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MenuOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MenuInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MenuClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MaxPlayerNumSet(int32 MaxPlayerNum);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitSync() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyButtonActive() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHiddenSecondListMode() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void Init(EVGVisualLobbyNetMode NetMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReadyStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMenuOpenStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVGVisualLobbyActionListEntry GetActionListEntry(EVGVisualLobbyActionItemType ActionItemType) const;
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void ChangeTeamFormation(EVGCharaTeam newTeam, int32 PlayerIndex);
    
};

