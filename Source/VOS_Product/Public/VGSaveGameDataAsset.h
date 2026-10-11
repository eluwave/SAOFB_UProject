#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGSaveCommonChunk.h"
#include "VGSaveSlotChunk.h"
#include "VGSaveGameDataAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGSaveGameDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveCommonChunk common_chunk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveSlotChunk slot_chunk;
    
    UVGSaveGameDataAsset();

};

