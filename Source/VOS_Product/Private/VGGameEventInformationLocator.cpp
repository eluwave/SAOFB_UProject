#include "VGGameEventInformationLocator.h"

AVGGameEventInformationLocator::AVGGameEventInformationLocator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = false;
    this->is_dialog_open = false;
    this->m_dialog_class = NULL;
    this->m_dialog_style = EVGDialogButtonStyle::None;
    this->m_event = NULL;
}

void AVGGameEventInformationLocator::NotifyEndEvent() {
}

