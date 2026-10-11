#pragma once
#include "CoreMinimal.h"
#include "EQuestWidgetState.generated.h"

UENUM(BlueprintType)
enum class EQuestWidgetState : uint8 {
    None,
    Browse,
    UndertakeSingle,
    UndertakeList,
    End,
    Num,
};

