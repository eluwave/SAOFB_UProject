#pragma once
#include "CoreMinimal.h"
#include "VGSaveProgressFlag.h"
#include "VGSaveProgressChunk.generated.h"

USTRUCT(BlueprintType)
struct FVGSaveProgressChunk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveProgressFlag flag;
    
    VOS_PRODUCT_API FVGSaveProgressChunk();
};

