#pragma once
#include "CoreMinimal.h"
#include "Curves/RichCurve.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "VGMaterialParamGroup.h"
#include "VGMovieSceneRimColorAnimTemplate.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGMovieSceneRimColorAnimTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
private:
    virtual UScriptStruct& GetScriptStructImpl() const override { return *StaticStruct(); }
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGMaterialParamGroup material_param;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve rim_curve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve brush_curve;
    
    FVGMovieSceneRimColorAnimTemplate();
};

