#pragma once
#include "CoreMinimal.h"
#include "Misc/StringClassReference.h"
#include "Templates/SubclassOf.h"
#include "VGGameMode.h"
#include "VGEventPlayerGameMode.generated.h"

class AVGEventPlayerAgent;
class AVGSubSceneAgent;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGEventPlayerGameMode : public AVGGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_event_player_agent_reference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGSubSceneAgent> m_subscene_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_this_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_next_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_next_portal;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGEventPlayerAgent> m_event_player_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGEventPlayerAgent* m_event_player_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGSubSceneAgent* m_subscene_agent;
    
public:
    AVGEventPlayerGameMode(const FObjectInitializer& ObjectInitializer);

};

