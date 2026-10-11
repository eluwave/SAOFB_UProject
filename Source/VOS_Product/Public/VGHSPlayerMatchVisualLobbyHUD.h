#pragma once
#include "CoreMinimal.h"
#include "VGVisualLobbyHUD.h"
#include "VGHSPlayerMatchVisualLobbyHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class AVGHSPlayerMatchVisualLobbyHUD : public AVGVisualLobbyHUD {
    GENERATED_BODY()
public:
    AVGHSPlayerMatchVisualLobbyHUD(const FObjectInitializer& ObjectInitializer);

};

