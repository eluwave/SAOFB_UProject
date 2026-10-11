#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneAtomSectionTemplateData.h"
#include "MovieSceneAtomSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneAtomSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
private:
    virtual UScriptStruct& GetScriptStructImpl() const override { return *StaticStruct(); }
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneAtomSectionTemplateData AtomData;
    
    CRIWARERUNTIME_API FMovieSceneAtomSectionTemplate();
};

