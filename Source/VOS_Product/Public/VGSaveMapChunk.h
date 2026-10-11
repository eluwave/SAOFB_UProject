#pragma once
#include "CoreMinimal.h"
#include "VGSaveMapRecord.h"
#include "VGSaveMapTargetPoint.h"
#include "VGSaveMapChunk.generated.h"

USTRUCT(BlueprintType)
struct FVGSaveMapChunk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveMapTargetPoint Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveMapRecord> records;
    
    VOS_PRODUCT_API FVGSaveMapChunk();
};

