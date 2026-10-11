#pragma once
#include "CoreMinimal.h"
#include "VisualLobbyReadyCheckStatusChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVisualLobbyReadyCheckStatusChangeDelegate, bool, NewReadyCheckStatus);

