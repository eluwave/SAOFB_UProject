#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "VGLayeredBlendConfig.h"
#include "VGAnimNode_LayeredBoneBlendSelectable.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAnimNode_LayeredBoneBlendSelectable : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink BasePose;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoseLink> BlendPoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConfigId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGLayeredBlendConfig> Config;
    
    FVGAnimNode_LayeredBoneBlendSelectable();
};

