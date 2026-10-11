#include "VGSoundManager.h"

UVGSoundManager::UVGSoundManager() {
    this->DefaultBgmFadeInTime = 0;
    this->DefaultBgmFadeInOffset = 0;
    this->DefaultBgmFadeOutTime = 1000;
    this->BgmAisacValue = 0.00f;
    this->BgmAisacChangeTime = 8.00f;
    this->NamedBgmAisacValue = 0.00f;
    this->NamedBgmAisacChangeTime = 8.00f;
    this->BossBgmAisacValue = 0.00f;
    this->BossBgmAisacChangeTime = 8.00f;
    this->DefaultAtomospherFadeOutTime = 1000;
    this->bIgnoreRequest = false;
    this->CueSheetStageSE = NULL;
    this->CueSheetBgm = NULL;
    this->CueSheetEventBgm = NULL;
    this->CueSheetAtomospher = NULL;
    this->CueSheetEventAtomospher = NULL;
}

void UVGSoundManager::StopSimpleSound(EVGSoundType::Type Type, int32 CueID, AActor* Owner) {
}

void UVGSoundManager::StopEventAtomospher() {
}

void UVGSoundManager::StopBgm(EVGSoundBgmSlot::Type Slot) {
}

void UVGSoundManager::StopAtomospher() {
}

AVGSoundPlayer* UVGSoundManager::SpawnSoundPlayer(AActor* Owner, FVector Location, FRotator Rotation) {
    return NULL;
}

void UVGSoundManager::SetStageSeCueSheet(USoundAtomCueSheet* InCueSheet) {
}

void UVGSoundManager::SetSelectorLabel(const FVGSoundSelectorInfo& SelectorInfo) {
}

void UVGSoundManager::SetKeepMapBgm(bool is_keep) {
}

void UVGSoundManager::SetIgnoreRequest(bool inIgnoreRequest) {
}

void UVGSoundManager::SetEventBgmCueSheet(USoundAtomCueSheet* InCueSheet) {
}

void UVGSoundManager::SetEventAtomospherCueSheet(USoundAtomCueSheet* InCueSheet) {
}

void UVGSoundManager::SetBgmVolume(EVGSoundBgmSlot::Type Slot, float Volume) {
}

void UVGSoundManager::SetBgmNextBlockIndex(EVGSoundBgmSlot::Type Slot, int32 BlockIndex) {
}

void UVGSoundManager::SetBgmFadeOutTime(EVGSoundBgmSlot::Type Slot, int32 FadeTimeMilliSec) {
}

void UVGSoundManager::SetBgmFadeInTime(EVGSoundBgmSlot::Type Slot, int32 FadeTimeMilliSec, int32 FadeInOffsetMilliSec) {
}

void UVGSoundManager::SetBgmCueSheet(USoundAtomCueSheet* InCueSheet) {
}

void UVGSoundManager::SetBgmAutoControlStopByEvent(bool is_stop) {
}

void UVGSoundManager::SetBgmAutoControl(bool is_enable) {
}

void UVGSoundManager::SetBgmAisacParam(EVGSoundBgmSlot::Type Slot, EVGSoundAisac::Type ControlID, float value) {
}

void UVGSoundManager::SetAtomospherCueSheet(USoundAtomCueSheet* InCueSheet) {
}

void UVGSoundManager::SetAllVolume(float Volume) {
}

void UVGSoundManager::SetAllMute(bool bIsMute) {
}

void UVGSoundManager::RestartEventAtomospher() {
}

void UVGSoundManager::RestartBgm(EVGSoundBgmSlot::Type Slot) {
}

void UVGSoundManager::RestartAtomospher() {
}

void UVGSoundManager::ResetBgmFadeTime(EVGSoundBgmSlot::Type Slot) {
}

void UVGSoundManager::ResetBgmAisacValue() {
}

void UVGSoundManager::ResetAllParam() {
}

void UVGSoundManager::RequestStopSoundByCueName(EVGSoundType::Type inType, const FString& InCueName, AActor* InOwner, int32 ComponentIndex) {
}

void UVGSoundManager::RequestStopSoundByCueId(EVGSoundType::Type inType, int32 InCueId, AActor* InOwner, int32 ComponentIndex) {
}

void UVGSoundManager::RequestStopSoundAll() {
}

void UVGSoundManager::RequestStopSoundActorAll() {
}

void UVGSoundManager::RequestStopSoundActor(AActor* InOwner) {
}

void UVGSoundManager::RequestStopSound(EVGSoundType::Type inType, AActor* InOwner, int32 ComponentIndex) {
}

void UVGSoundManager::RequestStopPreviewSoundByCueName(EVGSoundType::Type inType, const FString& InCueName) {
}

void UVGSoundManager::RequestStopPreviewSoundByCueId(EVGSoundType::Type inType, int32 InCueId) {
}

void UVGSoundManager::RequestStopPreviewSound() {
}

void UVGSoundManager::RequestStopPositionSoundAll() {
}

void UVGSoundManager::RequestPreviewSound(const FVGSoundRequestInfo& RequestInfo) {
}

void UVGSoundManager::RequestPlaySound(const FVGSoundRequestInfo& RequestInfo) {
}

void UVGSoundManager::ReleaseStageSeCueSheet() {
}

void UVGSoundManager::ReleaseEventBgmCueSheet() {
}

void UVGSoundManager::ReleaseEventAtomospherCueSheet() {
}

void UVGSoundManager::ReleaseBgmCueSheet() {
}

void UVGSoundManager::ReleaseAtomospherCueSheet() {
}

AVGSoundPlayer* UVGSoundManager::PlaySoundAttached(AActor* Owner, USceneComponent* AttachToComponent, FName AttachPointName, FVector offsetLocation, FRotator OffsetRotation, EVGSoundType::Type Type, int32 CueID, float Volume, bool AutoDestroy, bool IsAttached) {
    return NULL;
}

AVGSoundPlayer* UVGSoundManager::PlaySoundAtLocation(AActor* Owner, FVector Location, FRotator Rotation, EVGSoundType::Type Type, int32 CueID, float Volume, bool AutoDestroy) {
    return NULL;
}

TArray<int32> UVGSoundManager::PlaySound(const FVGSoundRequestInfo& RequestInfo) {
    return TArray<int32>();
}

AVGSoundPlaybackHandle* UVGSoundManager::PlaySimpleSound(EVGSoundType::Type Type, int32 CueID, AActor* Owner, float Volume, bool IsReportPlayEnd) {
    return NULL;
}

void UVGSoundManager::PlayEventAtomospher(int32 CueID, int32 BlockIndex) {
}

void UVGSoundManager::PlayBgmByInfo(EVGSoundBgmSlot::Type Slot, const FVGSoundBgmInfo& BgmInfo) {
}

void UVGSoundManager::PlayBgmActionCue(EVGSoundBgmSlot::Type Slot, int32 CueID) {
}

void UVGSoundManager::PlayBgm(EVGSoundBgmSlot::Type Slot, int32 CueID, int32 BlockIndex) {
}

void UVGSoundManager::PlayAtomospher(int32 CueID, int32 BlockIndex) {
}

bool UVGSoundManager::IsSameCueSheet(USoundAtomCueSheet* InCueSheet) {
    return false;
}

bool UVGSoundManager::IsPlayingEventAtomospher() const {
    return false;
}

bool UVGSoundManager::IsPlayingByCueName(EVGSoundType::Type inType, const FString& InCueName, AActor* InOwner, int32 ComponentIndex) {
    return false;
}

bool UVGSoundManager::IsPlayingByCueId(EVGSoundType::Type inType, int32 InCueId, AActor* InOwner, int32 ComponentIndex) {
    return false;
}

bool UVGSoundManager::IsPlayingBgm(EVGSoundBgmSlot::Type Slot) const {
    return false;
}

bool UVGSoundManager::IsPlayingAtomospher() const {
    return false;
}

bool UVGSoundManager::IsKeepMapBgm() const {
    return false;
}

bool UVGSoundManager::IsFading(EVGSoundBgmSlot::Type Slot) const {
    return false;
}

bool UVGSoundManager::IsExistBgmCueId(EVGSoundBgmSlot::Type Slot, int32 CueID) {
    return false;
}

bool UVGSoundManager::IsBgmAutoControl() const {
    return false;
}

bool UVGSoundManager::IsAllMute() const {
    return false;
}

int32 UVGSoundManager::GetPlayingCueId(int32 PlayBackId) const {
    return 0;
}

int32 UVGSoundManager::GetPlayingBgmCueId(EVGSoundBgmSlot::Type Slot) const {
    return 0;
}

void UVGSoundManager::CancelPlaySoundRequest(const FVGSoundRequestInfo& RequestInfo) {
}

