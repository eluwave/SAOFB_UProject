#pragma once
#include "CoreMinimal.h"
#include "VGSaveQuestRecord.h"
#include "VGSaveQuestChunk.generated.h"

USTRUCT(BlueprintType)
struct FVGSaveQuestChunk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveQuestRecord> records;
    
    VOS_PRODUCT_API FVGSaveQuestChunk();
};

