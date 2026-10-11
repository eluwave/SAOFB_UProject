#pragma once
#include "CoreMinimal.h"
#include "EVGAdventureCommand.generated.h"

UENUM(BlueprintType)
namespace EVGAdventureCommand {
    enum Type {
        Message,
        Selection,
        Finish,
    };
}

