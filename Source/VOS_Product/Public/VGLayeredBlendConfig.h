#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimTypes.h"
#include "Animation/AnimData/BoneMaskFilter.h"
#include "VGLayeredBlendConfig.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGLayeredBlendConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FInputBlendPose> LayerSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<float> BlendWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMeshSpaceRotationBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECurveBlendOption::Type> CurveBlendOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlendRootMotionBasedOnRootBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasRelevantPoses;
    
    FVGLayeredBlendConfig();
};

