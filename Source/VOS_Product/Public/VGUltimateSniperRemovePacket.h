#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "VGUltimatePacket.h"
#include "VGUltimateSniperRemovePacket.generated.h"

USTRUCT(BlueprintType)
struct FVGUltimateSniperRemovePacket : public FVGUltimatePacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 Location;
    
    VOS_PRODUCT_API FVGUltimateSniperRemovePacket();
};

