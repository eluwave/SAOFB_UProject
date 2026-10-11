#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysEmotionSituation.h"
#include "VGAfasysEmotion.generated.h"

USTRUCT(BlueprintType)
struct FVGAfasysEmotion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysEmotionSituation::Type> situation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 action_id;
    
    VOS_PRODUCT_API FVGAfasysEmotion();
};

