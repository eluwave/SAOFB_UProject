#pragma once
#include "CoreMinimal.h"
#include "VGVisualLobbyMenuWidget.h"
#include "VGVisualLobbyPlayerListItemInfo.h"
#include "VGCoopVisualLobbyMenuWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGCoopVisualLobbyMenuWidget : public UVGVisualLobbyMenuWidget {
    GENERATED_BODY()
public:
    UVGCoopVisualLobbyMenuWidget();

    UFUNCTION(BlueprintCallable)
    void SetPlayers(const TArray<FVGVisualLobbyPlayerListItemInfo>& entries);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayers();
    
};

