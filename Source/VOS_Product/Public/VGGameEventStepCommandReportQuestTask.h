#pragma once
#include "CoreMinimal.h"
#include "VGGameEventStepCommandReportQuestTask.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepCommandReportQuestTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName step_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName quest_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString task_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 param;
    
    FVGGameEventStepCommandReportQuestTask();
};

