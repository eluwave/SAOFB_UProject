#pragma once
#include "CoreMinimal.h"
#include "EVGCharaUnique.h"
#include "Templates/SubclassOf.h"
#include "VGUIActor.h"
#include "VGEventPlayerAgent.generated.h"

class AVGGameEventStepSequencePlayer;
class AVGSubSceneAgent;
class UVGEventPlayerWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGEventPlayerAgent : public AVGUIActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGEventPlayerWidget> m_event_player_widget_class;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGEventPlayerWidget* m_event_player_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGSubSceneAgent* m_subscene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AVGGameEventStepSequencePlayer> m_event_step_seq_player;
    
public:
    AVGEventPlayerAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartEventSelect(EVGCharaUnique chara_id, FName event_id);
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
};

