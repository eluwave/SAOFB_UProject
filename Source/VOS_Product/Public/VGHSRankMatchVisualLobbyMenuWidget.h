#pragma once
#include "CoreMinimal.h"
#include "VGVisualLobbyMenuWidget.h"
#include "VGVisualLobbyPlayerListItemInfo.h"
#include "VGHSRankMatchVisualLobbyMenuWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHSRankMatchVisualLobbyMenuWidget : public UVGVisualLobbyMenuWidget {
    GENERATED_BODY()
public:
    UVGHSRankMatchVisualLobbyMenuWidget();

    UFUNCTION(BlueprintCallable)
    void SetPlayers(const TArray<FVGVisualLobbyPlayerListItemInfo>& entries);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyButtonActive() const;
    
};

