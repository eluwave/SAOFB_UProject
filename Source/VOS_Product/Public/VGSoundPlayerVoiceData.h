#pragma once
#include "CoreMinimal.h"
#include "VGTextSymbol.h"
#include "VGSoundPlayerVoiceData.generated.h"

USTRUCT(BlueprintType)
struct FVGSoundPlayerVoiceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 cue_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 friendship_rank;
    
    VOS_PRODUCT_API FVGSoundPlayerVoiceData();
};

