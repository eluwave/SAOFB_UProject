#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGSoundCueInfo.h"
#include "VGMovieData.generated.h"

class UDataTable;
class UManaTexture;
class USoundAtomCueSheet;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMovieData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaTexture* movie_texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* subtitle_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* cue_sheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSoundCueInfo> cue_infos;
    
    UVGMovieData();

};

