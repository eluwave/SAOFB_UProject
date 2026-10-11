#pragma once
#include "CoreMinimal.h"
#include "VGTriggerAssetSet.generated.h"

class UVGTriggerAsset;

USTRUCT(BlueprintType)
struct FVGTriggerAssetSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGTriggerAsset* Asset;
    
    VOS_PRODUCT_API FVGTriggerAssetSet();
};

