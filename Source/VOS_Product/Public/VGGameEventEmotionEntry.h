#pragma once
#include "CoreMinimal.h"
#include "VGGameEventEmotionEntry.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FVGGameEventEmotionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* male_animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* female_animation;
    
    VOS_PRODUCT_API FVGGameEventEmotionEntry();
};

