#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EVGSoundAttribute.h"
#include "VGOverrideSoundCueSheets.h"
#include "VGSoundCueInfo.h"
#include "VGSoundPlayer.generated.h"

class USoundAtomCueSheet;
class UVGSoundComponent;

UCLASS(Blueprintable)
class AVGSoundPlayer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGSoundComponent* SoundComponent;
    
    AVGSoundPlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopSound();
    
    UFUNCTION(BlueprintCallable)
    void SetCueSheet(EVGSoundAttribute::Type Type, USoundAtomCueSheet* InCueSheet);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoDestroy(bool inAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    void PlaySound(const TArray<FVGSoundCueInfo>& inCueList);
    
    UFUNCTION(BlueprintCallable)
    void OverrideCueSheets(const FVGOverrideSoundCueSheets inCueSheets);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnReportPlayEnd(int32 PlayBackId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable)
    void CopyCueSheetSetting(const UVGSoundComponent* inComponent);
    
};

