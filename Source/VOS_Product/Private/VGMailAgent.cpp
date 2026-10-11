#include "VGMailAgent.h"

AVGMailAgent::AVGMailAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_widget_class = NULL;
    this->m_mail_data = NULL;
    this->m_widget = NULL;
}

void AVGMailAgent::Start() {
}

void AVGMailAgent::SetMailID(FName ID) {
}

