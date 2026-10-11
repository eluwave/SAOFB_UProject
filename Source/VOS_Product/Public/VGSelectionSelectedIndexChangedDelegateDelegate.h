#pragma once
#include "CoreMinimal.h"
#include "VGSelectionSelectedIndexChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVGSelectionSelectedIndexChangedDelegate, int32, index);

