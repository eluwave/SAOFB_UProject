#pragma once
#include "CoreMinimal.h"
#include "Math/Range.h"
#include "Curves/RichCurve.h"
#include "MovieSceneAtomSectionTemplateData.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FMovieSceneAtomSectionTemplateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AtomStartOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange AtomRange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve AtomPitchMultiplierCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve AtomVolumeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RowIndex;
    
    CRIWARERUNTIME_API FMovieSceneAtomSectionTemplateData();
};

