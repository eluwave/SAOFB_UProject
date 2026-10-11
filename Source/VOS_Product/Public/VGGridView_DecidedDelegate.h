#pragma once
#include "CoreMinimal.h"
#include "VGGridView_DecidedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FVGGridView_Decided, int32, index, int32, subIndex, const FString&, tag);

