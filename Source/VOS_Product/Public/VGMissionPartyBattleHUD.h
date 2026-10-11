#pragma once
#include "CoreMinimal.h"
#include "VGMissionBattleHUD.h"
#include "VGMissionPartyBattleHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGMissionPartyBattleHUD : public AVGMissionBattleHUD {
    GENERATED_BODY()
public:
    AVGMissionPartyBattleHUD(const FObjectInitializer& ObjectInitializer);

};

