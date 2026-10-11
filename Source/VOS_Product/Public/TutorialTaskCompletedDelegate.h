#pragma once
#include "CoreMinimal.h"
#include "TutorialTaskCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTutorialTaskCompleted, const FName&, TaskId);

