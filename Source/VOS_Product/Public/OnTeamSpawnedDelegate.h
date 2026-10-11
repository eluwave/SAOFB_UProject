#pragma once
#include "CoreMinimal.h"
#include "OnTeamSpawnedDelegate.generated.h"

class AVGAITeam;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTeamSpawned, AVGAITeam*, Team);

