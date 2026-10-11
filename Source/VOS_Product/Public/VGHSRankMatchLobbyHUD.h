#pragma once
#include "CoreMinimal.h"
#include "VGVisualLobbyHUD.h"
#include "VGHSRankMatchLobbyHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class AVGHSRankMatchLobbyHUD : public AVGVisualLobbyHUD {
    GENERATED_BODY()
public:
    AVGHSRankMatchLobbyHUD(const FObjectInitializer& ObjectInitializer);

};

