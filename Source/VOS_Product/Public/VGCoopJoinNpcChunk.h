#pragma once
#include "CoreMinimal.h"
#include "VGCoopJoinNpcData.h"
#include "VGCoopJoinNpcChunk.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGCoopJoinNpcChunk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGCoopJoinNpcData> join_npc_ids_data;
    
    FVGCoopJoinNpcChunk();
};

