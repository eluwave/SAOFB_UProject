#pragma once
#include "CoreMinimal.h"
#include "VGGameMode.h"
#include "VGGameEventGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class AVGGameEventGameMode : public AVGGameMode {
    GENERATED_BODY()
public:
    AVGGameEventGameMode(const FObjectInitializer& ObjectInitializer);

};

