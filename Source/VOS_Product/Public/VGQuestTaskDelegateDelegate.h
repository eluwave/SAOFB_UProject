#pragma once
#include "CoreMinimal.h"
#include "VGQuestTask.h"
#include "VGQuestTaskDelegateDelegate.generated.h"

class UVGQuestRecord;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVGQuestTaskDelegate, const UVGQuestRecord*, quest, const FVGQuestTask&, task);

