#pragma once
#include "CoreMinimal.h"
#include "VGBattleSequencer.h"
#include "VGShowBattleSequencer.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGShowBattleSequencer : public AVGBattleSequencer {
    GENERATED_BODY()
public:
    AVGShowBattleSequencer(const FObjectInitializer& ObjectInitializer);

};

