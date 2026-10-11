#pragma once
#include "CoreMinimal.h"
#include "VGQuestDelegateDelegate.generated.h"

class UVGQuestRecord;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVGQuestDelegate, const UVGQuestRecord*, quest);

