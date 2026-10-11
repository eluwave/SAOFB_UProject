#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGMovieItemEntry.h"
#include "VGVisualItemEntry.h"
#include "VGGalleryItemSetting.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGGalleryItemSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMovieItemEntry> movie_item_entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGVisualItemEntry> visual_item_entries;
    
    UVGGalleryItemSetting();

};

