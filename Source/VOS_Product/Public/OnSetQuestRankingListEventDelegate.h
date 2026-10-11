#pragma once
#include "CoreMinimal.h"
#include "OnSetQuestRankingListEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSetQuestRankingListEvent, const TArray<FText>&, quest_list);

