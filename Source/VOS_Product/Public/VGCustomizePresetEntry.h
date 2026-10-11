#pragma once
#include "CoreMinimal.h"
#include "VGCustomizePresetEntry.generated.h"

class UVGAvatarCustomizeSetting;

USTRUCT(BlueprintType)
struct FVGCustomizePresetEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSetting* customize_setting;
    
    VOS_PRODUCT_API FVGCustomizePresetEntry();
};

