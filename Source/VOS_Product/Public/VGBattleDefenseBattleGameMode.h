#pragma once
#include "CoreMinimal.h"
#include "VGBattleOfflineGameMode.h"
#include "VGBattleDefenseBattleGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGBattleDefenseBattleGameMode : public AVGBattleOfflineGameMode {
    GENERATED_BODY()
public:
    AVGBattleDefenseBattleGameMode(const FObjectInitializer& ObjectInitializer);

};

