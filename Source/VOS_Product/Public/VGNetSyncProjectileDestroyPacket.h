#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "VGNetSyncProjectileDestroyPacket.generated.h"

USTRUCT(BlueprintType)
struct FVGNetSyncProjectileDestroyPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 chara_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 finish_flag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 projectile_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_exec;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Roll;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Yaw;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Pitch;
    
public:
    VOS_PRODUCT_API FVGNetSyncProjectileDestroyPacket();
};

