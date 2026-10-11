#pragma once
#include "CoreMinimal.h"
#include "EVGTalkCharacter.generated.h"

UENUM(BlueprintType)
enum class EVGTalkCharacter : uint8 {
    Self,
    Player,
    AttackTarget,
    CurrentTarget,
    Other,
};

