#pragma once
#include "CoreMinimal.h"
#include "VGAfasysAdventureAgent_SetTextDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVGAfasysAdventureAgent_SetText, int32, voice_id, int32, action_id);

