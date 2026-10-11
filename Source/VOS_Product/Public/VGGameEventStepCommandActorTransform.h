#pragma once
#include "CoreMinimal.h"
#include "VGGameEventStepCommandActorTransformEntry.h"
#include "VGGameEventStepCommandActorTransform.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepCommandActorTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName step_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandActorTransformEntry> entries;
    
    FVGGameEventStepCommandActorTransform();
};

