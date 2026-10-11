#include "VGShowThanksGameMode.h"

AVGShowThanksGameMode::AVGShowThanksGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_thanks_widget_class = NULL;
    this->m_thanks_time = 0.00f;
    this->m_thanks_widget = NULL;
}

