#pragma once
#include "CoreMinimal.h"
#include "Curves/IntegralCurve.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "VGMovieSceneVfxSignalTemplate.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGMovieSceneVfxSignalTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
private:
    virtual UScriptStruct& GetScriptStructImpl() const override { return *StaticStruct(); }
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntegralCurve signal_curve;
    
    FVGMovieSceneVfxSignalTemplate();
};

