#pragma once
#include "CoreMinimal.h"
#include "EVGDialogButton.h"
#include "VGDialogResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVGDialogResult, TEnumAsByte<EVGDialogButton::Type>, result);

