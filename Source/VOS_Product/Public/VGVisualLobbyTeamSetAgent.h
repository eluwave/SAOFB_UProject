#pragma once
#include "CoreMinimal.h"
#include "EVGCharaTeam.h"
#include "EVGVisualLobbyNetMode.h"
#include "Templates/SubclassOf.h"
#include "VGUIActor.h"
#include "VGVisualLobbyPlayerListItemInfo.h"
#include "VGVisualLobbyTeamSetAgent.generated.h"

class UVGVisualLobbyTeamSetWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGVisualLobbyTeamSetAgent : public AVGUIActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGVisualLobbyTeamSetWidget> m_visual_lobby_team_set_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGVisualLobbyTeamSetWidget* m_visual_lobby_team_set_widget;
    
public:
    AVGVisualLobbyTeamSetAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Start(EVGVisualLobbyNetMode NetMode, const TArray<FVGVisualLobbyPlayerListItemInfo>& PlayersItemInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayers(const TArray<FVGVisualLobbyPlayerListItemInfo>& PlayersItemInfo);
    
    UFUNCTION(BlueprintCallable)
    void ChangeTeamFormation(EVGCharaTeam newTeam, int32 PlayerIndex);
    
};

