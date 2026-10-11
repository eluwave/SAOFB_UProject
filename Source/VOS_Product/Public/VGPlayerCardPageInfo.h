#pragma once
#include "CoreMinimal.h"
#include "EVGPlayerCardPose.h"
#include "VGPlayerCardPageInfo.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGPlayerCardPageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGPlayerCardPose Chara;
    
    FVGPlayerCardPageInfo();
};

