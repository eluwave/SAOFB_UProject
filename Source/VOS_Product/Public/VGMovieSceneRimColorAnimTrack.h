#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "VGMovieSceneRimColorAnimTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMovieSceneRimColorAnimTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> animation_sections;
    
public:
    UVGMovieSceneRimColorAnimTrack();

};

