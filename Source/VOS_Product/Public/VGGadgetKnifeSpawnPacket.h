#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "VGGadgetPacket.h"
#include "VGGadgetKnifeSpawnPacket.generated.h"

USTRUCT(BlueprintType)
struct FVGGadgetKnifeSpawnPacket : public FVGGadgetPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 Direction;
    
    VOS_PRODUCT_API FVGGadgetKnifeSpawnPacket();
};

