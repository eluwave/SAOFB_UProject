#pragma once
#include "CoreMinimal.h"
#include "SoundPlayEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSoundPlayEnd, int32, PlayBackId);

