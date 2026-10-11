#pragma once
#include "CoreMinimal.h"
#include "TutorialTaskStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTutorialTaskStarted, const FName&, TaskId);

