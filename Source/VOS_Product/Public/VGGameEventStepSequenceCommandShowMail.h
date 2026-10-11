#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGGameEventStepSequenceCommandShowMail.generated.h"

class AVGMailAgent;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepSequenceCommandShowMail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName step_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGMailAgent> mail_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mail_id;
    
    FVGGameEventStepSequenceCommandShowMail();
};

