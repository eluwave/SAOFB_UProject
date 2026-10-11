#pragma once
#include "CoreMinimal.h"
#include "VGPositionSoundPlayer.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGPositionSoundPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    FVGPositionSoundPlayer();
};

