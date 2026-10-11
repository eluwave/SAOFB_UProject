#pragma once
#include "CoreMinimal.h"
#include "VGAdventureAgent_SelectionDecidedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVGAdventureAgent_SelectionDecided, int32, index, const FString&, tag);

