#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineSession.h"
#include "VPOnlineSession.generated.h"

UCLASS(Blueprintable)
class VPONLINESESSIONSUPERVISOR_API UVPOnlineSession : public UOnlineSession {
    GENERATED_BODY()
public:
    UVPOnlineSession();

};

