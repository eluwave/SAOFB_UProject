#pragma once
#include "CoreMinimal.h"
#include "VGConversationData.generated.h"

class UVGAIUnit;

USTRUCT(BlueprintType)
struct FVGConversationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAIUnit* main_speaker_unit;
    
    VOS_PRODUCT_API FVGConversationData();
};

