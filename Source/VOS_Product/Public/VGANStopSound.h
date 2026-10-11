#pragma once
#include "CoreMinimal.h"
#include "EVGSoundType.h"
#include "VGAnimNotify.h"
#include "VGANStopSound.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class VOS_PRODUCT_API UVGANStopSound : public UVGAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGSoundType::Type> sound_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 cue_id;
    
    UVGANStopSound();

};

