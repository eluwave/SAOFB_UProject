#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "VGUltimatePacket.h"
#include "VGUltimateLauncherSecondFirePacket.generated.h"

USTRUCT(BlueprintType)
struct FVGUltimateLauncherSecondFirePacket : public FVGUltimatePacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal Normal;
    
    VOS_PRODUCT_API FVGUltimateLauncherSecondFirePacket();
};

