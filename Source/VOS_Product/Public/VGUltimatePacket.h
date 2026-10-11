#pragma once
#include "CoreMinimal.h"
#include "VGBulletPacket.h"
#include "VGUltimatePacket.generated.h"

USTRUCT(BlueprintType)
struct FVGUltimatePacket : public FVGBulletPacket {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 sub_id;
    
    VOS_PRODUCT_API FVGUltimatePacket();
};

