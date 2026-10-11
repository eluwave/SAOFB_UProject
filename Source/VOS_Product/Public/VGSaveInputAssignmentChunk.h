#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "VGSaveInputAssignmentChunk.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSaveInputAssignmentChunk {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, uint32> key_map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, FKey> axis_map;
    
    FVGSaveInputAssignmentChunk();
};

