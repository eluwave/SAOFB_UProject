#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGGameEventEntry.h"
#include "VGGameEventEntryDataAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGGameEventEntryDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventEntry> event_entries;
    
    UVGGameEventEntryDataAsset();

};

