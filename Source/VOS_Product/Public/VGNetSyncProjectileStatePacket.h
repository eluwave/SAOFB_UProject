#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "VGNetSyncProjectileStatePacket.generated.h"

USTRUCT(BlueprintType)
struct FVGNetSyncProjectileStatePacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 Direction;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Roll;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Yaw;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Pitch;
    
public:
    VOS_PRODUCT_API FVGNetSyncProjectileStatePacket();
};

