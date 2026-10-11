#pragma once
#include "CoreMinimal.h"
#include "TutorialTaskWorker.generated.h"

class UVGTutorialScript;

USTRUCT(BlueprintType)
struct FTutorialTaskWorker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName tutorial_task_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGTutorialScript* script_object;
    
    VOS_PRODUCT_API FTutorialTaskWorker();
};

