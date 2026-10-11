#pragma once
#include "CoreMinimal.h"
#include "VGTeamCommandPacket.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FVGTeamCommandPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* commander;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Command;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 flag;
    
    VOS_PRODUCT_API FVGTeamCommandPacket();
};

