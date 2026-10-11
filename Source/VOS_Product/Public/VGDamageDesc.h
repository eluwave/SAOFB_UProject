#pragma once
#include "CoreMinimal.h"
#include "EVGDamageAttr.h"
#include "EVGDamageImpact.h"
#include "VGDamageKnockBack.h"
#include "VGStatusAilment.h"
#include "VGDamageDesc.generated.h"

USTRUCT(BlueprintType)
struct FVGDamageDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGDamageAttr> attr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGStatusAilment> status_ailment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGDamageImpact impact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float hit_stop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float owner_hit_stop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGDamageKnockBack knock_back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float damage_hate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float hit_hate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float reaction_coeff;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 hit_cam_shake;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 hit_force_feedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float reduce_npc_damage_rate;
    
    VOS_PRODUCT_API FVGDamageDesc();
};

