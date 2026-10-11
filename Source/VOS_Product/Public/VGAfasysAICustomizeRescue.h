#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysAIRescue.h"
#include "VGAfasysAICustomizeBase.h"
#include "VGAfasysAICustomizeRescue.generated.h"

USTRUCT(BlueprintType)
struct FVGAfasysAICustomizeRescue : public FVGAfasysAICustomizeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysAIRescue::Type> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float rescue_range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float rescue_priority;
    
    VOS_PRODUCT_API FVGAfasysAICustomizeRescue();
};

