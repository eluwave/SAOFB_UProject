#pragma once
#include "CoreMinimal.h"
#include "VGAISpawnedInfo.generated.h"

USTRUCT(BlueprintType)
struct FVGAISpawnedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 unique_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    VOS_PRODUCT_API FVGAISpawnedInfo();
};

