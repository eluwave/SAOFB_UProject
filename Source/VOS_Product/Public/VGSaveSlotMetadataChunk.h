#pragma once
#include "CoreMinimal.h"
#include "VGSaveSlotInfoBlock.h"
#include "VGSaveSlotMetadataChunk.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSaveSlotMetadataChunk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 last_used_slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveSlotInfoBlock> Slot;
    
    FVGSaveSlotMetadataChunk();
};

