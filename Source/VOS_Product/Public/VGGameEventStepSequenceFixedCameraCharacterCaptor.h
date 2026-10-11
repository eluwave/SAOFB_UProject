#pragma once
#include "CoreMinimal.h"
#include "Engine/SceneCapture2D.h"
#include "VGGameEventStepSequenceFixedCameraCharacterCaptor.generated.h"

class AActor;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGameEventStepSequenceFixedCameraCharacterCaptor : public ASceneCapture2D {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_target;
    
public:
    AVGGameEventStepSequenceFixedCameraCharacterCaptor(const FObjectInitializer& ObjectInitializer);

};

