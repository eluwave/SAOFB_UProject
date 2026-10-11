#pragma once
#include "CoreMinimal.h"
#include "VGRoamNpcCharacterInfo.generated.h"

class UVGAvatarCustomizeSetting;

USTRUCT(BlueprintType)
struct FVGRoamNpcCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSetting* avatar_setting;
    
    VOS_PRODUCT_API FVGRoamNpcCharacterInfo();
};

