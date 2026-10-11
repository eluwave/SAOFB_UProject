#pragma once
#include "CoreMinimal.h"
#include "VGHudSubtitlesInfo.generated.h"

USTRUCT(BlueprintType)
struct FVGHudSubtitlesInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText chara_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Subtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float life_time;
    
    VOS_PRODUCT_API FVGHudSubtitlesInfo();
};

