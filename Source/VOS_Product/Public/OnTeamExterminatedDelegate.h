#pragma once
#include "CoreMinimal.h"
#include "OnTeamExterminatedDelegate.generated.h"

class AVGAITeam;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTeamExterminated, AVGAITeam*, Team);

