#pragma once
#include "CoreMinimal.h"
#include "EVGCharaTeam.h"
#include "EVGVisualLobbyNetMode.h"
#include "VGDataLoadGridViewItem.h"
#include "VGVisualLobbyPlayerListItemInfo.h"
#include "VGVisualLobbyTeamSetListItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGVisualLobbyTeamSetListItem : public UVGDataLoadGridViewItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_player_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaTeam m_selected_team;
    
public:
    UVGVisualLobbyTeamSetListItem();

    UFUNCTION(BlueprintCallable)
    void SetRandomButton();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerListItemInfo(const FVGVisualLobbyPlayerListItemInfo& PlayerListItemInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetDecideButton();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerListItemInfoUpdated(const FVGVisualLobbyPlayerListItemInfo& PlayerListItemInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void Init(EVGVisualLobbyNetMode NetMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGCharaTeam GetTeamType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeTeamEventRefresh(EVGCharaTeam newTeam);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeTeam(EVGCharaTeam newTeam);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ButtonSetup(const FText& ButtonText);
    
};

