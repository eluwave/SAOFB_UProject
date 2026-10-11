#pragma once
#include "CoreMinimal.h"
#include "VGAfasysAdventureAgent_SelectionCanceledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVGAfasysAdventureAgent_SelectionCanceled, const FString&, tag);

