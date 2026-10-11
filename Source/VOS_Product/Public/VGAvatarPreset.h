#pragma once
#include "CoreMinimal.h"
#include "VGAvatarPreset.generated.h"

class UVGAvatarCustomizeSetting;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAvatarPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSetting* customize_setting;
    
    FVGAvatarPreset();
};

