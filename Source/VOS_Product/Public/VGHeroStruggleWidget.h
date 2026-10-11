#pragma once
#include "CoreMinimal.h"
#include "EVGCharaTeam.h"
#include "EVGWidgetSound.h"
#include "VGHeroStruggleCharaIconDisplayInfo.h"
#include "VGHeroStrugglePlayerListItemInfo.h"
#include "VGWidget.h"
#include "VGHeroStruggleWidget.generated.h"

class UAnimMontage;
class UDataTable;
class UVGCharacterCalcComponent;
class UVGDialog;
class UVGHeroStruggleCharaIconWidget;
class UVGHeroStruggleNPCStatusEquipWidget;
class UVGHeroStruggleSelectedCharaWidget;
class UVGPassiveSkillComponent;
class UVGQuestRecord;
class UVGStatusMeter;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHeroStruggleWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 k_selected_chara_max_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_open_icon_delay_sec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_random_change_interval_sec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_character_role_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGWidgetSound::Type> k_index_change_other_player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGWidgetSound::Type> k_decide_other_player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGWidgetSound::Type> k_cancel_other_player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_preview_anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGHeroStrugglePlayerListItemInfo> m_players_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGHeroStruggleCharaIconDisplayInfo> m_icons_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGHeroStruggleCharaIconDisplayInfo> m_random_icons_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVGHeroStruggleCharaIconWidget*> m_icon_widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVGHeroStruggleSelectedCharaWidget*> m_selected_chara_widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_friend_status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGStatusMeter* m_status_meter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGHeroStruggleNPCStatusEquipWidget* m_friend_equip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_wait_opponent_team_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_leave_room_confirm_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGQuestRecord* m_quest_record;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGCharacterCalcComponent* m_calc_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGPassiveSkillComponent* m_passive_skill_component;
    
public:
    UVGHeroStruggleWidget();

    UFUNCTION(BlueprintCallable)
    void SetReady(int32 PlayerId, int32 CursorIndex, bool IsReady);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayers_Spectator(const TArray<FVGHeroStrugglePlayerListItemInfo>& AlphaTeamInfo, const TArray<FVGHeroStrugglePlayerListItemInfo>& BravoTeamInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayers(const TArray<FVGHeroStrugglePlayerListItemInfo>& PlayersItemInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetCursorIndex(int32 PlayerId, int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharaIconLayout_Left();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharaIconLayout_Center();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBestTimeWithInt(int32 Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBestTimeRanking(int32 rank, int32 Total);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void QueryClose();
    
    UFUNCTION(BlueprintCallable)
    void OpenRoam();
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetOwnTeamId(EVGCharaTeam team_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenStatusView(const FVGHeroStruggleCharaIconDisplayInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseStatusView();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeStatusViewCharacter(const FVGHeroStruggleCharaIconDisplayInfo& Info);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DelaiedOpenIcons_VisualLobby();
    
    UFUNCTION(BlueprintCallable)
    void DelaiedOpenIcons();
    
public:
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeSpectatorMode();
    
};

