#pragma once
#include "CoreMinimal.h"
#include "VGGameEventStepCommandVisibilityEntry.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepCommandVisibilityEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_visible;
    
    FVGGameEventStepCommandVisibilityEntry();
};

