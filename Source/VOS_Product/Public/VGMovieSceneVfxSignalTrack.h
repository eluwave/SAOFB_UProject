#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "VGMovieSceneVfxSignalTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMovieSceneVfxSignalTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> signal_sections;
    
public:
    UVGMovieSceneVfxSignalTrack();

};

