#pragma once
#include "CoreMinimal.h"
#include "InputHorizontalCorsurDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInputHorizontalCorsur, bool, dir);

