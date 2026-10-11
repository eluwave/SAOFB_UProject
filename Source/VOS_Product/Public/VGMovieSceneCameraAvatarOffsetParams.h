#pragma once
#include "CoreMinimal.h"
#include "VGMovieSceneCameraAvatarOffsetParams.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGMovieSceneCameraAvatarOffsetParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float deapth_rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float side_rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float height_rate;
    
    FVGMovieSceneCameraAvatarOffsetParams();
};

