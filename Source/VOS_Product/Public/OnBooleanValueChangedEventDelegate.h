#pragma once
#include "CoreMinimal.h"
#include "OnBooleanValueChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBooleanValueChangedEvent, bool, value);

