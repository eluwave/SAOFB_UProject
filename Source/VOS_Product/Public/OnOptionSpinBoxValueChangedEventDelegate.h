#pragma once
#include "CoreMinimal.h"
#include "OnOptionSpinBoxValueChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOptionSpinBoxValueChangedEvent, int32, value);

