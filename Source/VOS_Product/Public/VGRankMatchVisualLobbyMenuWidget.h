#pragma once
#include "CoreMinimal.h"
#include "VGVisualLobbyMenuWidget.h"
#include "VGVisualLobbyPlayerListItemInfo.h"
#include "VGRankMatchVisualLobbyMenuWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGRankMatchVisualLobbyMenuWidget : public UVGVisualLobbyMenuWidget {
    GENERATED_BODY()
public:
    UVGRankMatchVisualLobbyMenuWidget();

    UFUNCTION(BlueprintCallable)
    void SetPlayers(const TArray<FVGVisualLobbyPlayerListItemInfo>& entries);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyButtonActive() const;
    
};

