#pragma once
#include "CoreMinimal.h"
#include "VGGameState.h"
#include "VGGameEventViewerGameState.generated.h"

class AVGGameEventStepSequencePlayer;
class UVGGameEventEntryDataAsset;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGameEventViewerGameState : public AVGGameState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGGameEventEntryDataAsset* m_entry_list_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGGameEventStepSequencePlayer* m_event_player;
    
public:
    AVGGameEventViewerGameState(const FObjectInitializer& ObjectInitializer);

};

