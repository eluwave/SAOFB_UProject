#pragma once
#include "CoreMinimal.h"
#include "VGVisualLobbyHUD.h"
#include "VGPlayerMatchVisualLobbyHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class AVGPlayerMatchVisualLobbyHUD : public AVGVisualLobbyHUD {
    GENERATED_BODY()
public:
    AVGPlayerMatchVisualLobbyHUD(const FObjectInitializer& ObjectInitializer);

};

