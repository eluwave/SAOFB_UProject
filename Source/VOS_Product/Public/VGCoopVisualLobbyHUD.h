#pragma once
#include "CoreMinimal.h"
#include "VGVisualLobbyHUD.h"
#include "VGCoopVisualLobbyHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class AVGCoopVisualLobbyHUD : public AVGVisualLobbyHUD {
    GENERATED_BODY()
public:
    AVGCoopVisualLobbyHUD(const FObjectInitializer& ObjectInitializer);

};

