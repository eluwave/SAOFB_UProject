#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "EVGDamageImpact.h"
#include "EVGStatusAilment.h"
#include "VGDamageReactionPacket.generated.h"

USTRUCT(BlueprintType)
struct FVGDamageReactionPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 attacker_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 reaction_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 damage_attr;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 damage_result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGDamageImpact damage_impact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGStatusAilment ailment;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 weapon_id;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 hit_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 knock_back_velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float knock_back_yaw;
    
    VOS_PRODUCT_API FVGDamageReactionPacket();
};

