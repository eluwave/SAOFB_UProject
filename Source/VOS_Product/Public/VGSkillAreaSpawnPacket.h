#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "VGBulletPacket.h"
#include "VGSkillAreaSpawnPacket.generated.h"

USTRUCT(BlueprintType)
struct FVGSkillAreaSpawnPacket : public FVGBulletPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 skill_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 Location;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Roll;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Yaw;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Pitch;
    
public:
    VOS_PRODUCT_API FVGSkillAreaSpawnPacket();
};

