#pragma once
#include "CoreMinimal.h"
#include "EVGQuestCustomAction.h"
#include "EVGQuestCustomTrigger.h"
#include "VGQuestCustomAction.generated.h"

USTRUCT(BlueprintType)
struct FVGQuestCustomAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGQuestCustomTrigger Trigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString trigger_param;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGQuestCustomAction action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString action_param;
    
    VOS_PRODUCT_API FVGQuestCustomAction();
};

