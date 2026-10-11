#pragma once
#include "CoreMinimal.h"
#include "OnSpawnAttachedDelegateDelegate.generated.h"

class AVGBattleCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSpawnAttachedDelegate, AVGBattleCharacter*, attach, AVGBattleCharacter*, attached);

