#pragma once
#include "CoreMinimal.h"
#include "EVGUnitCommand.h"
#include "VGAISkill.h"
#include "VGAIAction.generated.h"

class UVGAIUnit;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAIAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAIUnit* unit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGUnitCommand Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAISkill skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    FVGAIAction();
};

