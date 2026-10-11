#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "VGUltimatePacket.h"
#include "VGUltimateLauncherAreaSpawnPacket.generated.h"

USTRUCT(BlueprintType)
struct FVGUltimateLauncherAreaSpawnPacket : public FVGUltimatePacket {
    GENERATED_BODY()
public:
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
    VOS_PRODUCT_API FVGUltimateLauncherAreaSpawnPacket();
};

