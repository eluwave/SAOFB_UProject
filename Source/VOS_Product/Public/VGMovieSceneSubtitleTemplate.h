#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "VGMovieSceneSubtitleTemplate.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGMovieSceneSubtitleTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
private:
    virtual UScriptStruct& GetScriptStructImpl() const override { return *StaticStruct(); }
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName chara_name_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName serif_id;
    
    FVGMovieSceneSubtitleTemplate();
};

