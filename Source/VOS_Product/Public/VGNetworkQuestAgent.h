#pragma once
#include "CoreMinimal.h"
#include "VGQuestAgent.h"
#include "VGNetworkQuestAgent.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGNetworkQuestAgent : public AVGQuestAgent {
    GENERATED_BODY()
public:
    AVGNetworkQuestAgent(const FObjectInitializer& ObjectInitializer);

};

