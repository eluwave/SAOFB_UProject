#pragma once
#include "CoreMinimal.h"
#include "VGTextSymbol.h"
#include "VGGameEventStepSelectionEntry.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepSelectionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol text_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName next_step_id;
    
    FVGGameEventStepSelectionEntry();
};

