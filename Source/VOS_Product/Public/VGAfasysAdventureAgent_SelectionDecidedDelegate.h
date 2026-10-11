#pragma once
#include "CoreMinimal.h"
#include "VGAfasysAdventureAgent_SelectionDecidedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVGAfasysAdventureAgent_SelectionDecided, int32, index, const FString&, tag);

