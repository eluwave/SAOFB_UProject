#pragma once
#include "CoreMinimal.h"
#include "VGTriggerStateCondition.h"
#include "VGTriggerCondition.generated.h"

class UVGCommandAsset;

USTRUCT(BlueprintType)
struct FVGTriggerCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGCommandAsset*> commands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGCommandAsset*> not_commands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGTriggerStateCondition> states;
    
    VOS_PRODUCT_API FVGTriggerCondition();
};

