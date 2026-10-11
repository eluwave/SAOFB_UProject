#pragma once
#include "CoreMinimal.h"
#include "VGGameEventStepCommandFCWindowProperty.h"
#include "VGGameEventStepCommandFCSetWindowPropertyEntry.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepCommandFCSetWindowPropertyEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGGameEventStepCommandFCWindowProperty prop;
    
    FVGGameEventStepCommandFCSetWindowPropertyEntry();
};

