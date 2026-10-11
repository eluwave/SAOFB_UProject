#pragma once
#include "CoreMinimal.h"
#include "VGCoopBattleHUD.h"
#include "VGCoopExtraBattleHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGCoopExtraBattleHUD : public AVGCoopBattleHUD {
    GENERATED_BODY()
public:
    AVGCoopExtraBattleHUD(const FObjectInitializer& ObjectInitializer);

};

