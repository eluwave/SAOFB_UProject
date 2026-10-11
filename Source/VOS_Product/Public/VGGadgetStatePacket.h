#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "VGGadgetStatePacket.generated.h"

USTRUCT(BlueprintType)
struct FVGGadgetStatePacket {
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
    VOS_PRODUCT_API FVGGadgetStatePacket();
};

