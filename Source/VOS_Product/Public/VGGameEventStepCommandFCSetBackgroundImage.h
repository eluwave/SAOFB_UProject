#pragma once
#include "CoreMinimal.h"
#include "VGGameEventStepCommandFCSetBackgroundImage.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepCommandFCSetBackgroundImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName step_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Image;
    
    FVGGameEventStepCommandFCSetBackgroundImage();
};

