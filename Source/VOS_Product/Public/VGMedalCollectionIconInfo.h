#pragma once
#include "CoreMinimal.h"
#include "EVGMarksCondition.h"
#include "VGMedalCollectionIconInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGMedalCollectionIconInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGMarksCondition Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    FVGMedalCollectionIconInfo();
};

