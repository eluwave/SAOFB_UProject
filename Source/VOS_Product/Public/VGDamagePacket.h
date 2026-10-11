#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "EVGDamageImpact.h"
#include "EVGKnockBackFactor.h"
#include "EVGKnockBackRotation.h"
#include "VGStatusAilment.h"
#include "VGDamagePacket.generated.h"

USTRUCT(BlueprintType)
struct FVGDamagePacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 target_id;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 weapon_id;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 hit_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 hit_location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal hit_normal;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 hit_melee;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 hit_cam_shake;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 damage_result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float damage_ratio;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 damage_attr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGDamageImpact damage_impact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGStatusAilment> status_ailment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 factor_location;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 factor_rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGKnockBackFactor knockback_factor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGKnockBackRotation knockback_rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 knockback_velocity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 hit_stop;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 owner_hit_stop;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 damage_hate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 hit_hate;
    
    VOS_PRODUCT_API FVGDamagePacket();
};

