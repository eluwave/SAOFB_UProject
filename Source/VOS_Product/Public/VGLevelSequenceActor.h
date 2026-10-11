#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "VGLevelSequenceActor.generated.h"

class ULevelSequence;
class UObject;
class USoundAtomCueSheet;
class UVGHudSubtitles;
class UVGLevelSequencePreloadSetting;
class UVGSoundComponent;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGSoundComponent* m_sound_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequence* m_sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* m_cue_sheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* m_afasys_cue_sheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGHudSubtitles* m_subtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_preload_holder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGLevelSequencePreloadSetting* m_preload_setting;
    
public:
    AVGLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void onPreloadAssetLoaded();
    
    UFUNCTION(BlueprintCallable)
    void onPlayStopped();
    
    UFUNCTION(BlueprintCallable)
    void onAssetLoaded();
    
};

