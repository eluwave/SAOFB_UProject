#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_TwoBoneIK.h"
#include "EVGIKType.h"
#include "VGAnimNode_TwoBoneIK.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAnimNode_TwoBoneIK : public FAnimNode_TwoBoneIK {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGIKType::Type> Type;
    
    FVGAnimNode_TwoBoneIK();
};

