#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGGameEventEmotionEntry.h"
#include "VGGameEventEmotionPackAsset.generated.h"

UCLASS(Blueprintable)
class UVGGameEventEmotionPackAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventEmotionEntry> emotion_entries;
    
    UVGGameEventEmotionPackAsset();

};

