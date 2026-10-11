#pragma once
#include "CoreMinimal.h"
#include "VGBulletPacket.h"
#include "VGBeaconHitPacket.generated.h"

USTRUCT(BlueprintType)
struct FVGBeaconHitPacket : public FVGBulletPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 target_id;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 hit_id;
    
    VOS_PRODUCT_API FVGBeaconHitPacket();
};

