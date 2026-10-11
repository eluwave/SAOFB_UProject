#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "VGUltimatePacket.h"
#include "VGUltimateLauncherRemovePacket.generated.h"

USTRUCT(BlueprintType)
struct FVGUltimateLauncherRemovePacket : public FVGUltimatePacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 Location;
    
    VOS_PRODUCT_API FVGUltimateLauncherRemovePacket();
};

