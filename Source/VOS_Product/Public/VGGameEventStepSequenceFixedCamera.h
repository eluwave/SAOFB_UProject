#pragma once
#include "CoreMinimal.h"
#include "VGGameEventStepSequence.h"
#include "VGGameEventStepSequenceFixedCamera.generated.h"

class AVGGameEventStepSequenceFixedCameraCharacterCaptor;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGGameEventStepSequenceFixedCamera : public UVGGameEventStepSequence {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_chara_captor_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AVGGameEventStepSequenceFixedCameraCharacterCaptor*> m_captors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTextureRenderTarget2D*> m_render_targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_chara_offset_fb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_chara_offset_ud;
    
public:
    UVGGameEventStepSequenceFixedCamera();

};

