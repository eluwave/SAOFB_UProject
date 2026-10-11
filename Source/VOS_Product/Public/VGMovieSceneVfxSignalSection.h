#pragma once
#include "CoreMinimal.h"
#include "Curves/IntegralCurve.h"
#include "MovieSceneSection.h"
#include "VGMovieSceneVfxSignalSection.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMovieSceneVfxSignalSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntegralCurve m_curve;
    
public:
    UVGMovieSceneVfxSignalSection();

};

