#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "VGMovieSceneRimColorAnimParams.h"
#include "VGMovieSceneRimColorAnimSection.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMovieSceneRimColorAnimSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGMovieSceneRimColorAnimParams m_params;
    
public:
    UVGMovieSceneRimColorAnimSection();

};

