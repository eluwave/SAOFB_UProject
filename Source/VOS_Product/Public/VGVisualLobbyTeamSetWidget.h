#pragma once
#include "CoreMinimal.h"
#include "EVGCharaTeam.h"
#include "EVGVisualLobbyNetMode.h"
#include "VGVisualLobbyPlayerListItemInfo.h"
#include "VGWidget.h"
#include "VGVisualLobbyTeamSetWidget.generated.h"

class UVGGridView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGVisualLobbyTeamSetWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_team_formation_list;
    
public:
    UVGVisualLobbyTeamSetWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWindowCaption(const FText& Caption);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayers(const TArray<FVGVisualLobbyPlayerListItemInfo>& PlayersItemInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerPlayerId(int32 PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTeamDecided();
    
    UFUNCTION(BlueprintCallable)
    void OnSelectIndexChanged(int32 index, int32 sub_index);
    
    UFUNCTION(BlueprintCallable)
    void OnRandomSelect();
    
    UFUNCTION(BlueprintCallable)
    void OnChangedTeam(EVGCharaTeam newTeam, int32 PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnCanceled();
    
public:
    UFUNCTION(BlueprintCallable)
    void Init(EVGVisualLobbyNetMode NetMode);
    
    UFUNCTION(BlueprintCallable)
    void CloseCompleted();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void ChangeTeamFormation(EVGCharaTeam newTeam, int32 PlayerIndex);
    
};

