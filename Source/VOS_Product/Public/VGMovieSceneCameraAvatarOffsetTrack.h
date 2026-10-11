#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "VGMovieSceneCameraAvatarOffsetTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMovieSceneCameraAvatarOffsetTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> CameraAvatarOffset_sections;
    
public:
    UVGMovieSceneCameraAvatarOffsetTrack();

};

