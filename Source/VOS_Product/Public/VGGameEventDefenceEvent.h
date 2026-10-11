#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "EVGDefenceSequence.h"
#include "VGGameEventStepSequenceRefEvent.h"
#include "VGGameEventDefenceEvent.generated.h"

UCLASS(Blueprintable)
class UVGGameEventDefenceEvent : public UVGGameEventStepSequenceRefEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_asset_path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGDefenceSequence m_launch_sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGDefenceSequence m_end_sequence;
    
public:
    UVGGameEventDefenceEvent();

};

