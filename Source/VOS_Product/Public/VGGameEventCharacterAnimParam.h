#pragma once
#include "CoreMinimal.h"
#include "EVGGameEventCharacterAnimLayer.h"
#include "VGGameEventCharacterAnimParam.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FVGGameEventCharacterAnimParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float play_speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGGameEventCharacterAnimLayer Layer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 loop_count;
    
    VOS_PRODUCT_API FVGGameEventCharacterAnimParam();
};

