#pragma once
#include "CoreMinimal.h"
#include "TutorialTaskPostQuoteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTutorialTaskPostQuote, const FName&, TaskId);

