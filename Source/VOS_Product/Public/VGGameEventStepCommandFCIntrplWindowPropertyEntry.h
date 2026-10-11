#pragma once
#include "CoreMinimal.h"
#include "VGGameEventStepCommandFCWindowProperty.h"
#include "VGGameEventStepCommandFCIntrplWindowPropertyEntry.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepCommandFCIntrplWindowPropertyEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGGameEventStepCommandFCWindowProperty begin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGGameEventStepCommandFCWindowProperty End;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    FVGGameEventStepCommandFCIntrplWindowPropertyEntry();
};

