#pragma once
#include "CoreMinimal.h"
#include "OnMessageWindowVisibilityEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMessageWindowVisibilityEvent, bool, index);

