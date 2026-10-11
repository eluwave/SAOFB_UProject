#pragma once
#include "CoreMinimal.h"
#include "VGSelectionDecidedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVGSelectionDecidedDelegate, int32, index);

