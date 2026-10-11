#pragma once
#include "CoreMinimal.h"
#include "EVGCharaTeam.h"
#include "VGVisualLobbyMenuWidget.h"
#include "VGVisualLobbyPlayerListItemInfo.h"
#include "VGHSPlayerMatchVisualLobbyMenuWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHSPlayerMatchVisualLobbyMenuWidget : public UVGVisualLobbyMenuWidget {
    GENERATED_BODY()
public:
    UVGHSPlayerMatchVisualLobbyMenuWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMemberListHeader();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayers(const TArray<FVGVisualLobbyPlayerListItemInfo>& entries);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMyTeam(EVGCharaTeam Team);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyButtonActive() const;
    
};

