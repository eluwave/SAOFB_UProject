#include "VGResultAgent.h"

AVGResultAgent::AVGResultAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_result_widget_class = NULL;
    this->m_result_agent_class = NULL;
    this->m_result_widget = NULL;
    this->m_result_agent = NULL;
}

void AVGResultAgent::Start() {
}

