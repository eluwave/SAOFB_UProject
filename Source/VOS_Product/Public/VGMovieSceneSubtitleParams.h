#pragma once
#include "CoreMinimal.h"
#include "VGMovieSceneSubtitleParams.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGMovieSceneSubtitleParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName chara_name_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName serif_id;
    
    FVGMovieSceneSubtitleParams();
};

