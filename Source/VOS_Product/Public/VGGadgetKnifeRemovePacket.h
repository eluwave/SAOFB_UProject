#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "VGGadgetPacket.h"
#include "VGGadgetKnifeRemovePacket.generated.h"

USTRUCT(BlueprintType)
struct FVGGadgetKnifeRemovePacket : public FVGGadgetPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 Location;
    
    VOS_PRODUCT_API FVGGadgetKnifeRemovePacket();
};

