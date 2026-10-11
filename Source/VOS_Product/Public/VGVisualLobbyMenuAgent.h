#pragma once
#include "CoreMinimal.h"
#include "EVGCharaTeam.h"
#include "EVGPadKey.h"
#include "EVGVisualLobbyNetMode.h"
#include "Templates/SubclassOf.h"
#include "VGUIActor.h"
#include "VGVisualLobbyPlayerListItemInfo.h"
#include "VGVisualLobbyMenuAgent.generated.h"

class UVGVisualLobbyMenuWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGVisualLobbyMenuAgent : public AVGUIActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGVisualLobbyMenuWidget* m_visual_lobby_menu_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGVisualLobbyMenuWidget> m_visual_lobby_menu_widget_class;
    
public:
    AVGVisualLobbyMenuAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnsetQuestText();
    
    UFUNCTION(BlueprintCallable)
    void ToggleMemberList();
    
    UFUNCTION(BlueprintCallable)
    void SetQuestText(const FText& QuestName);
    
    UFUNCTION(BlueprintCallable)
    void SetQuestID(const FName& QuestID);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayers(const TArray<FVGVisualLobbyPlayerListItemInfo>& entries);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerPlayerId(int32 PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SetCloseButton(EVGPadKey::Type btn);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayers();
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void NotifySyncPhase(bool Start);
    
    UFUNCTION(BlueprintCallable)
    void NotifyCountdown(bool Start);
    
    UFUNCTION(BlueprintCallable)
    void Init(EVGVisualLobbyNetMode NetMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMenuOpenStatus() const;
    
    UFUNCTION(BlueprintCallable)
    void CloseAll();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void ChangeTeamFormation(EVGCharaTeam newTeam, int32 PlayerId);
    
};

