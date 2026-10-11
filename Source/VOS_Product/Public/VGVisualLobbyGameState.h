#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGLobbyGameState.h"
#include "VGVisualLobbyGameState.generated.h"

class AVGNetworkQuestAgent;
class UDataTable;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGVisualLobbyGameState : public AVGLobbyGameState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGNetworkQuestAgent> m_quest_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGNetworkQuestAgent* m_quest_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_impersonator_setting;
    
public:
    AVGVisualLobbyGameState(const FObjectInitializer& ObjectInitializer);

};

