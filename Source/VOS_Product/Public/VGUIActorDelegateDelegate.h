#pragma once
#include "CoreMinimal.h"
#include "VGUIActorDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVGUIActorDelegate, int32, param);

