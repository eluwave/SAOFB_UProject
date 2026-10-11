#pragma once
#include "CoreMinimal.h"
#include "VGInventoryEntryId.h"
#include "VGCostumeListAgentClosedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVGCostumeListAgentClosed, FVGInventoryEntryId, ID);

