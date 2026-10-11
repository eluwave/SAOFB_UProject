#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "VGMovieSceneSubtitleParams.h"
#include "VGMovieSceneSubtitleSection.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMovieSceneSubtitleSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGMovieSceneSubtitleParams m_params;
    
public:
    UVGMovieSceneSubtitleSection();

};

