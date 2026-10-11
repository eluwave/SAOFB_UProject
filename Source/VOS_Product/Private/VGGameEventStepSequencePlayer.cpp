#include "VGGameEventStepSequencePlayer.h"

AVGGameEventStepSequencePlayer::AVGGameEventStepSequencePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_event = NULL;
    this->m_skip_dialog = NULL;
}

void AVGGameEventStepSequencePlayer::Play(FName EventId, const FStringAssetReference& Path, AVGGameEventLocator* locator) {
}

void AVGGameEventStepSequencePlayer::onFadeCompleted() {
}

void AVGGameEventStepSequencePlayer::onDecideSkipDialog(EVGDialogButton::Type result) {
}

bool AVGGameEventStepSequencePlayer::IsPlaying() const {
    return false;
}

