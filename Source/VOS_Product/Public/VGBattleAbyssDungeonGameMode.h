#pragma once
#include "CoreMinimal.h"
#include "VGBattleOfflineGameMode.h"
#include "VGBattleAbyssDungeonGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGBattleAbyssDungeonGameMode : public AVGBattleOfflineGameMode {
    GENERATED_BODY()
public:
    AVGBattleAbyssDungeonGameMode(const FObjectInitializer& ObjectInitializer);

};

