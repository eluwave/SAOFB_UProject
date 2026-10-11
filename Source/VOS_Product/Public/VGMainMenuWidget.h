#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGMainMenuTabItem.h"
#include "VGTextSymbol.h"
#include "VGWidget.h"
#include "VGMainMenuWidget.generated.h"

class AVGDataBaseAgent;
class AVGEquipAgent;
class AVGFriendListAgent;
class AVGGoodsListAgent;
class AVGHeroImpersonatorAgent;
class AVGMapAgent;
class AVGMedalCollectionAgent;
class AVGMemoryChipChangeAgent;
class AVGOptionAgent;
class AVGPlayerCardAgent;
class AVGQuestAgent;
class AVGSkillEquipAgent;
class AVGSkillLearnAgent;
class AVGStatusAgent;
class UDataTable;
class UTexture2D;
class UVGDialog;
class UVGMainMenuBar;
class UVGMainMenuIndex;
class UVGMainMenuList;
class UVGMainMenuListSetting;
class UVGMainMenuTabSetting;
class UVGNavigationBar;

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class VOS_PRODUCT_API UVGMainMenuWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGMainMenuTabSetting* m_tab_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGStatusAgent> m_status_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGStatusAgent* m_status_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGEquipAgent> m_equip_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGEquipAgent* m_equip_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGSkillLearnAgent> m_skilllearn_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGSkillLearnAgent* m_skilllearn_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGSkillEquipAgent> m_skillequip_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGSkillEquipAgent* m_skillequip_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGGoodsListAgent> m_goodslist_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGGoodsListAgent* m_goodslist_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGQuestAgent> m_quest_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGQuestAgent* m_quest_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGMapAgent> m_map_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGMapAgent* m_map_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGFriendListAgent> m_friend_list_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGFriendListAgent* m_friend_list_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGPlayerCardAgent> m_player_card_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGPlayerCardAgent* m_player_card_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGOptionAgent> m_option_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGOptionAgent* m_option_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGDataBaseAgent> m_data_base_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGDataBaseAgent* m_data_base_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGMedalCollectionAgent> m_medal_collection_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGMedalCollectionAgent* m_medal_collection_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGHeroImpersonatorAgent> m_hero_impersonator_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGHeroImpersonatorAgent* m_hero_impersonator_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGMemoryChipChangeAgent> m_memory_chip_change_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGMemoryChipChangeAgent* m_memory_chip_change_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_mail_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGDialog> m_blur_effect_ui_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_logout_dialog_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMainMenuIndex* m_main_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMainMenuIndex* m_sub_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMainMenuBar* m_tab_bar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMainMenuList* m_main_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_mode_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_efficacy_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNavigationBar* m_navigation_bar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGMainMenuListSetting*> m_list_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_list_param00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_list_param01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMainMenuTabItem> m_selected_tab_item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_visible_list_items_index;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_character_tab_is_valid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_quest_tab_is_valid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_map_tab_is_valid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_community_tab_is_valid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_system_tab_is_valid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_status_menu_is_valid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_skill_learn_menu_is_valid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_gadget_menu_is_valid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_equip_menu_is_valid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_item_menu_is_valid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_main_quest_is_valid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_sub_quest_is_valid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_normal_quest_is_valid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bounty_hunt_quest_is_valid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_named_hunt_quest_is_valid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_treasure_quest_is_valid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_option_is_valid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_database_is_valid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_logout_is_valid;
    
public:
    UVGMainMenuWidget();

    UFUNCTION(BlueprintCallable)
    void SetTabIndex(int32 in_index);
    
    UFUNCTION(BlueprintCallable)
    void OpenMenu(bool is_map);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetTabIndex(int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetTabIcon(int32 index, UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPushRightShoulderButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPushLeftShoulderButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNativeDestruct();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNativeConstruct();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClose();
    
    UFUNCTION(BlueprintCallable)
    bool IsClose();
    
    UFUNCTION(BlueprintCallable)
    void Decide(int32 in_index);
    
    UFUNCTION(BlueprintCallable)
    void CloseMenu();
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

