#pragma once
#include "CoreMinimal.h"
#include "VGVisualLobbyHUD.h"
#include "VGRankMatchLobbyHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class AVGRankMatchLobbyHUD : public AVGVisualLobbyHUD {
    GENERATED_BODY()
public:
    AVGRankMatchLobbyHUD(const FObjectInitializer& ObjectInitializer);

};

