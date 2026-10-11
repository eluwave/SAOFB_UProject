#pragma once
#include "CoreMinimal.h"
#include "VGGameEventStepCommandFCIntrplWindowPropertyEntry.h"
#include "VGGameEventStepCommandFCIntrplWindowProperty.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepCommandFCIntrplWindowProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName step_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandFCIntrplWindowPropertyEntry> entries;
    
    FVGGameEventStepCommandFCIntrplWindowProperty();
};

