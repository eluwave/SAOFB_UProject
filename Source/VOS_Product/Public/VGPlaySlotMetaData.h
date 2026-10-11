#pragma once
#include "CoreMinimal.h"
#include "VGPlaySlotMetaData.generated.h"

class UVGAvatarCustomizeSetting;
class UVGCharacterFigureSetting;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGPlaySlotMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSetting* player_avatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGCharacterFigureSetting* player_figure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSetting* afasys_avatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGCharacterFigureSetting* afasys_figure;
    
    FVGPlaySlotMetaData();
};

