#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "VGAvatarVoiceEntry.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAvatarVoiceEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference cue_sheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName dlc_id;
    
    FVGAvatarVoiceEntry();
};

