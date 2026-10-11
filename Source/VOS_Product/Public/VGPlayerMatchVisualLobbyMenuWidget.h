#pragma once
#include "CoreMinimal.h"
#include "EVGCharaTeam.h"
#include "VGVisualLobbyMenuWidget.h"
#include "VGVisualLobbyPlayerListItemInfo.h"
#include "VGPlayerMatchVisualLobbyMenuWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGPlayerMatchVisualLobbyMenuWidget : public UVGVisualLobbyMenuWidget {
    GENERATED_BODY()
public:
    UVGPlayerMatchVisualLobbyMenuWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMemberListHeader();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayers(const TArray<FVGVisualLobbyPlayerListItemInfo>& entries);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMyTeam(EVGCharaTeam Team);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyButtonActive() const;
    
};

