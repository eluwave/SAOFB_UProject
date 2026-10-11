#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"

#include "EVGSoundAisac.h"
#include "EVGSoundBgmSlot.h"
#include "EVGSoundType.h"
#include "SoundPlayEndDelegate.h"
#include "VGSoundBgmInfo.h"
#include "VGSoundRequestInfo.h"
#include "VGSoundSelectorInfo.h"
#include "VGTimedVolumeControl.h"
#include "VGSoundManager.generated.h"

class AActor;
class AVGSoundPlaybackHandle;
class AVGSoundPlayer;
class UDataTable;
class USceneComponent;
class USoundAtomCueSheet;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGSoundManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundPlayEnd OnReportPlayEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultBgmFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultBgmFadeInOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultBgmFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BgmAisacValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BgmAisacChangeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NamedBgmAisacValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NamedBgmAisacChangeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BossBgmAisacValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BossBgmAisacChangeTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultAtomospherFadeOutTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGTimedVolumeControl> VolumeControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIgnoreRequest;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* BGMSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheetCommonSystemSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheetCommonBattleSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheetStageSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheetBgm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheetEventBgm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheetAtomospher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheetEventAtomospher;
    
public:
    UVGSoundManager();

    UFUNCTION(BlueprintCallable)
    static void StopSimpleSound(EVGSoundType::Type Type, int32 CueID, AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    void StopEventAtomospher();
    
    UFUNCTION(BlueprintCallable)
    void StopBgm(EVGSoundBgmSlot::Type Slot);
    
    UFUNCTION(BlueprintCallable)
    void StopAtomospher();
    
    UFUNCTION(BlueprintCallable)
    static AVGSoundPlayer* SpawnSoundPlayer(AActor* Owner, FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetStageSeCueSheet(USoundAtomCueSheet* InCueSheet);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectorLabel(const FVGSoundSelectorInfo& SelectorInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetKeepMapBgm(bool is_keep);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreRequest(bool inIgnoreRequest);
    
    UFUNCTION(BlueprintCallable)
    void SetEventBgmCueSheet(USoundAtomCueSheet* InCueSheet);
    
    UFUNCTION(BlueprintCallable)
    void SetEventAtomospherCueSheet(USoundAtomCueSheet* InCueSheet);
    
    UFUNCTION(BlueprintCallable)
    void SetBgmVolume(EVGSoundBgmSlot::Type Slot, float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetBgmNextBlockIndex(EVGSoundBgmSlot::Type Slot, int32 BlockIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetBgmFadeOutTime(EVGSoundBgmSlot::Type Slot, int32 FadeTimeMilliSec);
    
    UFUNCTION(BlueprintCallable)
    void SetBgmFadeInTime(EVGSoundBgmSlot::Type Slot, int32 FadeTimeMilliSec, int32 FadeInOffsetMilliSec);
    
    UFUNCTION(BlueprintCallable)
    void SetBgmCueSheet(USoundAtomCueSheet* InCueSheet);
    
    UFUNCTION(BlueprintCallable)
    void SetBgmAutoControlStopByEvent(bool is_stop);
    
    UFUNCTION(BlueprintCallable)
    void SetBgmAutoControl(bool is_enable);
    
    UFUNCTION(BlueprintCallable)
    void SetBgmAisacParam(EVGSoundBgmSlot::Type Slot, EVGSoundAisac::Type ControlID, float value);
    
    UFUNCTION(BlueprintCallable)
    void SetAtomospherCueSheet(USoundAtomCueSheet* InCueSheet);
    
    UFUNCTION(BlueprintCallable)
    void SetAllVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetAllMute(bool bIsMute);
    
    UFUNCTION(BlueprintCallable)
    void RestartEventAtomospher();
    
    UFUNCTION(BlueprintCallable)
    void RestartBgm(EVGSoundBgmSlot::Type Slot);
    
    UFUNCTION(BlueprintCallable)
    void RestartAtomospher();
    
    UFUNCTION(BlueprintCallable)
    void ResetBgmFadeTime(EVGSoundBgmSlot::Type Slot);
    
    UFUNCTION(BlueprintCallable)
    void ResetBgmAisacValue();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllParam();
    
    UFUNCTION(BlueprintCallable)
    void RequestStopSoundByCueName(EVGSoundType::Type inType, const FString& InCueName, AActor* InOwner, int32 ComponentIndex);
    
    UFUNCTION(BlueprintCallable)
    void RequestStopSoundByCueId(EVGSoundType::Type inType, int32 InCueId, AActor* InOwner, int32 ComponentIndex);
    
    UFUNCTION(BlueprintCallable)
    void RequestStopSoundAll();
    
    UFUNCTION(BlueprintCallable)
    void RequestStopSoundActorAll();
    
    UFUNCTION(BlueprintCallable)
    void RequestStopSoundActor(AActor* InOwner);
    
    UFUNCTION(BlueprintCallable)
    void RequestStopSound(EVGSoundType::Type inType, AActor* InOwner, int32 ComponentIndex);
    
    UFUNCTION(BlueprintCallable)
    void RequestStopPreviewSoundByCueName(EVGSoundType::Type inType, const FString& InCueName);
    
    UFUNCTION(BlueprintCallable)
    void RequestStopPreviewSoundByCueId(EVGSoundType::Type inType, int32 InCueId);
    
    UFUNCTION(BlueprintCallable)
    void RequestStopPreviewSound();
    
    UFUNCTION(BlueprintCallable)
    void RequestStopPositionSoundAll();
    
    UFUNCTION(BlueprintCallable)
    void RequestPreviewSound(const FVGSoundRequestInfo& RequestInfo);
    
    UFUNCTION(BlueprintCallable)
    void RequestPlaySound(const FVGSoundRequestInfo& RequestInfo);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseStageSeCueSheet();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseEventBgmCueSheet();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseEventAtomospherCueSheet();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseBgmCueSheet();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseAtomospherCueSheet();
    
    UFUNCTION(BlueprintCallable)
    static AVGSoundPlayer* PlaySoundAttached(AActor* Owner, USceneComponent* AttachToComponent, FName AttachPointName, FVector offsetLocation, FRotator OffsetRotation, EVGSoundType::Type Type, int32 CueID, float Volume, bool AutoDestroy, bool IsAttached);
    
    UFUNCTION(BlueprintCallable)
    static AVGSoundPlayer* PlaySoundAtLocation(AActor* Owner, FVector Location, FRotator Rotation, EVGSoundType::Type Type, int32 CueID, float Volume, bool AutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> PlaySound(const FVGSoundRequestInfo& RequestInfo);
    
    UFUNCTION(BlueprintCallable)
    static AVGSoundPlaybackHandle* PlaySimpleSound(EVGSoundType::Type Type, int32 CueID, AActor* Owner, float Volume, bool IsReportPlayEnd);
    
    UFUNCTION(BlueprintCallable)
    void PlayEventAtomospher(int32 CueID, int32 BlockIndex);
    
    UFUNCTION(BlueprintCallable)
    void PlayBgmByInfo(EVGSoundBgmSlot::Type Slot, const FVGSoundBgmInfo& BgmInfo);
    
    UFUNCTION(BlueprintCallable)
    void PlayBgmActionCue(EVGSoundBgmSlot::Type Slot, int32 CueID);
    
    UFUNCTION(BlueprintCallable)
    void PlayBgm(EVGSoundBgmSlot::Type Slot, int32 CueID, int32 BlockIndex);
    
    UFUNCTION(BlueprintCallable)
    void PlayAtomospher(int32 CueID, int32 BlockIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsSameCueSheet(USoundAtomCueSheet* InCueSheet);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingEventAtomospher() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayingByCueName(EVGSoundType::Type inType, const FString& InCueName, AActor* InOwner, int32 ComponentIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayingByCueId(EVGSoundType::Type inType, int32 InCueId, AActor* InOwner, int32 ComponentIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingBgm(EVGSoundBgmSlot::Type Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingAtomospher() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeepMapBgm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFading(EVGSoundBgmSlot::Type Slot) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsExistBgmCueId(EVGSoundBgmSlot::Type Slot, int32 CueID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBgmAutoControl() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllMute() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayingCueId(int32 PlayBackId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayingBgmCueId(EVGSoundBgmSlot::Type Slot) const;
    
    UFUNCTION(BlueprintCallable)
    void CancelPlaySoundRequest(const FVGSoundRequestInfo& RequestInfo);
    
};

