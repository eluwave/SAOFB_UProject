#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysAdventureCommand.generated.h"

UENUM(BlueprintType)
namespace EVGAfasysAdventureCommand {
    enum Type {
        Message,
        Selection,
        Finish,
    };
}

