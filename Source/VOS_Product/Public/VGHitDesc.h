#pragma once
#include "CoreMinimal.h"
#include "VGDamageDesc.h"
#include "VGHitActionDesc.h"
#include "VGHitEffect.h"
#include "VGHitDesc.generated.h"

USTRUCT(BlueprintType)
struct FVGHitDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float sphere_radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float half_height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_favor_capsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGDamageDesc desc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGHitActionDesc action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGHitEffect> hit_effects;
    
    VOS_PRODUCT_API FVGHitDesc();
};

