#pragma once
#include "CoreMinimal.h"
#include "VGCoopJoinNpcChunk.h"
#include "VGHeroQuestInfoChunk.h"
#include "VGSaveGameOptionSettingChunk.h"
#include "VGSaveItemBoxInventoryChunk.h"
#include "VGSaveMasteryChunk.h"
#include "VGSavePlatformOptionSettingChunk.h"
#include "VGSavePlayerCardChunk.h"
#include "VGSaveSlotMetadataChunk.h"
#include "VGSaveCommonChunk.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSaveCommonChunk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveSlotMetadataChunk slot_metadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveGameOptionSettingChunk game_option_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveItemBoxInventoryChunk item_box_inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSavePlayerCardChunk player_card;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveMasteryChunk mastery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSavePlatformOptionSettingChunk platform_option_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGHeroQuestInfoChunk hero_quest_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGCoopJoinNpcChunk coop_join_npc;
    
    FVGSaveCommonChunk();
};

