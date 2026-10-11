#pragma once
#include "CoreMinimal.h"
#include "VGGameEventStepCommandFCSetWindowPropertyEntry.h"
#include "VGGameEventStepCommandFCSetWindowProperty.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepCommandFCSetWindowProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName step_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandFCSetWindowPropertyEntry> entries;
    
    FVGGameEventStepCommandFCSetWindowProperty();
};

