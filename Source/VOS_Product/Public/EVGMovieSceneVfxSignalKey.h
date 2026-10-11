#pragma once
#include "CoreMinimal.h"
#include "EVGMovieSceneVfxSignalKey.generated.h"

UENUM(BlueprintType)
namespace EVGMovieSceneVfxSignalKey {
    enum Type {
        Trigger,
        Cancel,
    };
}

