#pragma once
#include "CoreMinimal.h"
#include "VGSoundCueInfo.h"
#include "VGGameEventStepCommandPlayMovie.generated.h"

class UDataTable;
class UManaTexture;
class USoundAtomCueSheet;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepCommandPlayMovie {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName step_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaTexture* movie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* subtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* cue_sheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSoundCueInfo> sound_cues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float bgm_fade_duration;
    
    FVGGameEventStepCommandPlayMovie();
};

