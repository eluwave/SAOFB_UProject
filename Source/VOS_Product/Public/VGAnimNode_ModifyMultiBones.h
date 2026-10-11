#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "VGAnimNode_ModifyMultiBones.generated.h"

class UVGCharacterFigureSetting;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAnimNode_ModifyMultiBones : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink InputPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGCharacterFigureSetting* figure_setting;
    
    FVGAnimNode_ModifyMultiBones();
};

