#include "VGTutorialManager.h"
#include "VGSoundComponent.h"

AVGTutorialManager::AVGTutorialManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_tutorial_script_index = NULL;
    this->m_hud_widget = NULL;
    this->m_sound_component = CreateDefaultSubobject<UVGSoundComponent>(TEXT("SoundComponent"));
}

void AVGTutorialManager::StartTutorialTask(const FName& TutorialTaskId) {
}

void AVGTutorialManager::RemoveHelpTexts(const TArray<FString>& HelpTexts) {
}

void AVGTutorialManager::PlayVoice(const FString& CueName, bool IsAfasys, bool IsClearPlayBackIds) {
}

void AVGTutorialManager::OnSoundReportPlayEnd(int32 PlayBackId) {
}

void AVGTutorialManager::NotifyGameStart(bool Started) {
}

AVGTutorialManager* AVGTutorialManager::GetTutorialManager(UObject* Context) {
    return NULL;
}

void AVGTutorialManager::EnableUFG(bool On) {
}

void AVGTutorialManager::EnableShot(bool On) {
}

void AVGTutorialManager::AddHelpTexts(const TArray<FString>& HelpTexts) {
}

