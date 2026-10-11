#pragma once
#include "CoreMinimal.h"
#include "EVGHeroSelectableCharacter.h"
#include "EVGHeroStruggleSettingType.h"
#include "Templates/SubclassOf.h"
#include "VGHeroStrugglePlayerListItemInfo.h"
#include "VGHeroStruggleSetting.h"
#include "VGUIActor.h"
#include "VGHSCharacterSelectAgent.generated.h"

class UDataTable;
class UVGCharacterCalcComponent;
class UVGHeroStruggleWidget;
class UVGPassiveSkillComponent;
class UVGQuestRecord;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGHSCharacterSelectAgent : public AVGUIActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_hero_struggle_icon_setting_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_hero_struggle_weapon_setting_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_battle_royal_hero_struggle_weapon_setting_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_hero_struggle_skill_setting_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_battle_royal_hero_struggle_skill_setting_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_hero_struggle_status_setting_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_battle_royal_hero_struggle_status_setting_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_hero_mission_weapon_setting_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_hero_mission_skill_setting_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_hero_mission_status_setting_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGHeroStruggleWidget> m_hero_select_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGHeroStruggleWidget* m_hero_select_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGHeroStrugglePlayerListItemInfo> m_players_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGHeroStrugglePlayerListItemInfo> m_alpha_team_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGHeroStrugglePlayerListItemInfo> m_bravo_team_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGCharacterCalcComponent> m_calc_component_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGCharacterCalcComponent* m_calc_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGPassiveSkillComponent* m_passive_skill_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGQuestRecord* m_quest_record;
    
public:
    AVGHSCharacterSelectAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartVisualLobby(EVGHeroStruggleSettingType Type, int32 OwnPlayerId, const TArray<FVGHeroStrugglePlayerListItemInfo>& PlayersItemInfo);
    
    UFUNCTION(BlueprintCallable)
    void StartSpectator(int32 OwnPlayerId, const TArray<FVGHeroStrugglePlayerListItemInfo>& AlphaTeamInfo, const TArray<FVGHeroStrugglePlayerListItemInfo>& BravoTeamInfo);
    
    UFUNCTION(BlueprintCallable)
    void StartHeroMission(EVGHeroStruggleSettingType Type, int32 OwnPlayerId, const TArray<FVGHeroStrugglePlayerListItemInfo>& PlayersItemInfo, const TArray<EVGHeroSelectableCharacter>& hero_selectable_info);
    
    UFUNCTION(BlueprintCallable)
    void Start(EVGHeroStruggleSettingType Type, int32 OwnPlayerId, const TArray<FVGHeroStrugglePlayerListItemInfo>& PlayersItemInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetReady(int32 PlayerId, int32 CursorIndex, bool IsReady);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerSelectedCursor(int32 PlayerId, int32 SelectedIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayers_Spectator(const TArray<FVGHeroStrugglePlayerListItemInfo>& AlphaTeamInfo, const TArray<FVGHeroStrugglePlayerListItemInfo>& BravoTeamInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayers(const TArray<FVGHeroStrugglePlayerListItemInfo>& PlayersItemInfo);
    
    UFUNCTION(BlueprintCallable)
    void GetPlayersSelectedInfo(TArray<FVGHeroStruggleSetting>& outPlayersSelectedInfo);
    
    UFUNCTION(BlueprintCallable)
    void ForceTerminate(int32 OwnPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

