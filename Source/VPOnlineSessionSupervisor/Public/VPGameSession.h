#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "VPGameSession.generated.h"

UCLASS(Blueprintable)
class VPONLINESESSIONSUPERVISOR_API AVPGameSession : public AGameSession {
    GENERATED_BODY()
public:
    AVPGameSession(const FObjectInitializer& ObjectInitializer);

};

