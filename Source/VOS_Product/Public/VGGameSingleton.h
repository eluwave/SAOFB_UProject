#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Misc/StringAssetReference.h"
#include "VGGameSingleton.generated.h"

class UDataTable;
class UTexture2D;
class UVGAIAssetUtility;
class UVGAbyssDungeonManager;
class UVGAchievementSupervisor;
class UVGAvatarItemCatalogue;
class UVGBattleTalkAssetUtility;
class UVGCharacterFigureSettingGenerator;
class UVGDropItemUtility;
class UVGFacePaintDataAsset;
class UVGItemCatalogue;
class UVGItemSpecialEffectUtility;
class UVGKpiDataSupervisor;
class UVGMeshVisualCustomizeDataAsset;
class UVGObjectCache;
class UVGQuestLibrary;
class UVGRoomItemCatalogue;
class UVGSaveGameSupervisor;
class UVGShopAssetLibrary;
class UVGSituationCatalogue;
class UVGSkeletalMeshPhysicsParamAsset;
class UVGSkillHeaderList;
class UVGSoundManager;
class UVGUpdateCloudStorageSupervisor;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class VOS_PRODUCT_API UVGGameSingleton : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGSoundManager* m_sound_manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAbyssDungeonManager* m_abyss_dungeon_manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAvatarItemCatalogue* m_avatar_item_catalogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGCharacterFigureSettingGenerator* m_figure_setting_generator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGSituationCatalogue* m_situation_catalogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGItemCatalogue* m_item_catalogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGSaveGameSupervisor* m_save_game_supervisor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_weapon_spec_melee_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_weapon_spec_melee;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_weapon_spec_range_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_weapon_spec_range;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_skill_header_list_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGSkillHeaderList* m_skill_header_list;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_skill_display_spec_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_skill_display_spec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGItemSpecialEffectUtility* m_item_special_effect_util;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGDropItemUtility* m_drop_item_util;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGRoomItemCatalogue* m_room_item_catalogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGQuestLibrary* m_quest_library;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGShopAssetLibrary* m_shop_asset_library;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAIAssetUtility* m_ai_asset_util;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGUpdateCloudStorageSupervisor* m_cloud_storage_supervisor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_mesh_visual_customize_data_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGMeshVisualCustomizeDataAsset* m_mesh_visual_customize_data;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_face_paint_data_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGFacePaintDataAsset* m_face_paint_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGBattleTalkAssetUtility* m_battle_talk_asset_util;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_skeletal_mesh_physics_param_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGSkeletalMeshPhysicsParamAsset* m_skeletal_mesh_physics_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAchievementSupervisor* m_achievement_supervisor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> m_loading_tips_bg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReference> m_loading_tips_bg_refs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_status_customize_level_table_asset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_hero_impersonator_setting_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_hero_impersonator_setting_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGKpiDataSupervisor* m_kpi_data_supervisor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_kpi_data_table_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_kpi_data_table_data;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReference> m_resident_assets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint8, UVGObjectCache*> m_resident_objects;
    
public:
    UVGGameSingleton();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UVGSoundManager* GetSoundManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UVGAbyssDungeonManager* GetAbyssDungeonManager();
    
};

