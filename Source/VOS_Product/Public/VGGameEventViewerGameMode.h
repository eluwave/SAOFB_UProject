#pragma once
#include "CoreMinimal.h"
#include "VGGameMode.h"
#include "VGGameEventViewerGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGGameEventViewerGameMode : public AVGGameMode {
    GENERATED_BODY()
public:
    AVGGameEventViewerGameMode(const FObjectInitializer& ObjectInitializer);

};

