#pragma once
#include "CoreMinimal.h"
#include "OnTeamAddedDelegate.generated.h"

class AVGAITeam;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTeamAdded, AVGAITeam*, Team);

