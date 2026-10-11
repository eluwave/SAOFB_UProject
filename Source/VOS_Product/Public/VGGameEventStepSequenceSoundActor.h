#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VGGameEventStepSequenceSoundActor.generated.h"

class USoundAtomCueSheet;
class UVGLipDataPack;
class UVGSoundComponent;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API AVGGameEventStepSequenceSoundActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGSoundComponent* m_sound_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* m_se_cue_sheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* m_voice_cue_sheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* m_afasys_voice_cue_sheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGLipDataPack* m_lip_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGLipDataPack* m_afasys_lip_data;
    
public:
    AVGGameEventStepSequenceSoundActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void onAssetLoaded();
    
};

