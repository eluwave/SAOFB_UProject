#pragma once
#include "CoreMinimal.h"
#include "OnEventDelegate.generated.h"

class UNetSocketEvent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEvent, UNetSocketEvent*, Event);

