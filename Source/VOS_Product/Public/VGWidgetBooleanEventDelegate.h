#pragma once
#include "CoreMinimal.h"
#include "VGWidgetBooleanEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVGWidgetBooleanEvent, bool, value);

