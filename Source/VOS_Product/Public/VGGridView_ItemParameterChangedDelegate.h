#pragma once
#include "CoreMinimal.h"
#include "VGGridView_ItemParameterChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FVGGridView_ItemParameterChanged, int32, index, int32, subIndex, FName, Key, const FString&, value);

