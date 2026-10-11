#pragma once
#include "CoreMinimal.h"
#include "VGSoundCrossFadeInfo.generated.h"

USTRUCT(BlueprintType)
struct FVGSoundCrossFadeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FadeInStartOffset;
    
    VOS_PRODUCT_API FVGSoundCrossFadeInfo();
};

