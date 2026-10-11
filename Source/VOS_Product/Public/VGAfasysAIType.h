#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysAIType.h"
#include "VGAIUnitParam.h"
#include "VGAfasysAICustomizeBase.h"
#include "VGAfasysAIType.generated.h"

USTRUCT(BlueprintType)
struct FVGAfasysAIType : public FVGAfasysAICustomizeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysAIType::Type> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAIUnitParam ai_param;
    
    VOS_PRODUCT_API FVGAfasysAIType();
};

