#pragma once
#include "CoreMinimal.h"
#include "VGTextSymbol.h"
#include "VGSoundPlayerBgmData.generated.h"

USTRUCT(BlueprintType)
struct FVGSoundPlayerBgmData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 cue_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 unlock_flag;
    
    VOS_PRODUCT_API FVGSoundPlayerBgmData();
};

