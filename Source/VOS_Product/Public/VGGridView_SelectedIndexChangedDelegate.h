#pragma once
#include "CoreMinimal.h"
#include "VGGridView_SelectedIndexChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVGGridView_SelectedIndexChanged, int32, index, int32, subIndex);

