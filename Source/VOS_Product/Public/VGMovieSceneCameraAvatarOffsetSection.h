#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "VGMovieSceneCameraAvatarOffsetParams.h"
#include "VGMovieSceneCameraAvatarOffsetSection.generated.h"

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGMovieSceneCameraAvatarOffsetSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGMovieSceneCameraAvatarOffsetParams m_params;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_default_avatar_height;
    
public:
    UVGMovieSceneCameraAvatarOffsetSection();

};

