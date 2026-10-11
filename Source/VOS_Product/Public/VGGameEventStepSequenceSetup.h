#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "VGGameEventStepSequenceCharacterEntry.h"
#include "VGGameEventStepSequenceMobCharacterEntry.h"
#include "VGGameEventStepSequenceSetup.generated.h"

class UVGGameEventEmotionPackAsset;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepSequenceSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_camera_control_required;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_save_required;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_skip_fade_disabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_ambient_sound_mute_required;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_event_bgm_keep_required;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 keep_bgm_cue_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_ai_deactivation_keep_required;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepSequenceCharacterEntry> characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepSequenceMobCharacterEntry> ext_characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGGameEventEmotionPackAsset* emotion_pack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference bgm_cue_sheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference ambient_cue_sheet;
    
    FVGGameEventStepSequenceSetup();
};

