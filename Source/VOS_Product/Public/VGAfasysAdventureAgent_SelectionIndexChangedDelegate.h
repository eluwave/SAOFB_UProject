#pragma once
#include "CoreMinimal.h"
#include "VGAfasysAdventureAgent_SelectionIndexChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVGAfasysAdventureAgent_SelectionIndexChanged, int32, index);

