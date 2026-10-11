#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "VGBulletPacket.h"
#include "VGSkillBulletRemovePacket.generated.h"

USTRUCT(BlueprintType)
struct FVGSkillBulletRemovePacket : public FVGBulletPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 Location;
    
    VOS_PRODUCT_API FVGSkillBulletRemovePacket();
};

