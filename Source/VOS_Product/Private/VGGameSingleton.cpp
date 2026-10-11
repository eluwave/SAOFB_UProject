#include "VGGameSingleton.h"
#include "VGAIAssetUtility.h"
#include "VGAbyssDungeonManager.h"
#include "VGAvatarItemCatalogue.h"
#include "VGBattleTalkAssetUtility.h"
#include "VGCharacterFigureSettingGenerator.h"
#include "VGItemCatalogue.h"
#include "VGItemSpecialEffectUtility.h"
#include "VGQuestLibrary.h"
#include "VGShopAssetLibrary.h"
#include "VGSituationCatalogue.h"

UVGGameSingleton::UVGGameSingleton() {
    this->m_sound_manager = NULL;
    this->m_abyss_dungeon_manager = CreateDefaultSubobject<UVGAbyssDungeonManager>(TEXT("AbyssDungeonManager"));
    this->m_avatar_item_catalogue = CreateDefaultSubobject<UVGAvatarItemCatalogue>(TEXT("AvatarItemCatalogue"));
    this->m_figure_setting_generator = CreateDefaultSubobject<UVGCharacterFigureSettingGenerator>(TEXT("FigureSettingGenerator"));
    this->m_situation_catalogue = CreateDefaultSubobject<UVGSituationCatalogue>(TEXT("SituationCatalogue"));
    this->m_item_catalogue = CreateDefaultSubobject<UVGItemCatalogue>(TEXT("ItemCatalogue"));
    this->m_save_game_supervisor = NULL;
    this->m_weapon_spec_melee = NULL;
    this->m_weapon_spec_range = NULL;
    this->m_skill_header_list = NULL;
    this->m_skill_display_spec = NULL;
    this->m_item_special_effect_util = CreateDefaultSubobject<UVGItemSpecialEffectUtility>(TEXT("ItemSpecialEffectUtility"));
    this->m_drop_item_util = NULL;
    this->m_room_item_catalogue = NULL;
    this->m_quest_library = CreateDefaultSubobject<UVGQuestLibrary>(TEXT("QuestLibrary"));
    this->m_shop_asset_library = CreateDefaultSubobject<UVGShopAssetLibrary>(TEXT("ShopAssetLibrary"));
    this->m_ai_asset_util = CreateDefaultSubobject<UVGAIAssetUtility>(TEXT("AIAssetUtility"));
    this->m_cloud_storage_supervisor = NULL;
    this->m_mesh_visual_customize_data = NULL;
    this->m_face_paint_data = NULL;
    this->m_battle_talk_asset_util = CreateDefaultSubobject<UVGBattleTalkAssetUtility>(TEXT("BattleTalkAssetUtility"));
    this->m_skeletal_mesh_physics_param = NULL;
    this->m_achievement_supervisor = NULL;
    this->m_hero_impersonator_setting_data = NULL;
    this->m_kpi_data_supervisor = NULL;
    this->m_kpi_data_table_data = NULL;
    this->m_resident_assets.AddDefaulted(20);
}

UVGSoundManager* UVGGameSingleton::GetSoundManager() {
    return NULL;
}

UVGAbyssDungeonManager* UVGGameSingleton::GetAbyssDungeonManager() {
    return NULL;
}

