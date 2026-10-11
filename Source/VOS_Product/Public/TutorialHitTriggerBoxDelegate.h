#pragma once
#include "CoreMinimal.h"
#include "TutorialHitTriggerBoxDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTutorialHitTriggerBox, const FName&, TaskId);

