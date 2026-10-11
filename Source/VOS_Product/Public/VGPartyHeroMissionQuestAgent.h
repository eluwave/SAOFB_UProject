#pragma once
#include "CoreMinimal.h"
#include "VGHeroMissionQuestAgent.h"
#include "VGPartyHeroMissionQuestAgent.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGPartyHeroMissionQuestAgent : public AVGHeroMissionQuestAgent {
    GENERATED_BODY()
public:
    AVGPartyHeroMissionQuestAgent(const FObjectInitializer& ObjectInitializer);

};

