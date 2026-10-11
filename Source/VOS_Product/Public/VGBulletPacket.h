#pragma once
#include "CoreMinimal.h"
#include "VGBulletPacket.generated.h"

USTRUCT(BlueprintType)
struct FVGBulletPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 chara_id;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 weapon_id;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 bullet_id;
    
    VOS_PRODUCT_API FVGBulletPacket();
};

