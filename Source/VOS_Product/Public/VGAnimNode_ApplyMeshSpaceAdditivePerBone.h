#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "VGAdditiveBlendConfig.h"
#include "VGAnimNode_ApplyMeshSpaceAdditivePerBone.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAnimNode_ApplyMeshSpaceAdditivePerBone : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink base;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink Additive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConfigId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAdditiveBlendConfig> Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverWriteBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LODThreshold;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ActualAlpha;
    
public:
    FVGAnimNode_ApplyMeshSpaceAdditivePerBone();
};

