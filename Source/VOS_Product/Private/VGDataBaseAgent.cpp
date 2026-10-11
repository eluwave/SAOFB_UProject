#include "VGDataBaseAgent.h"

AVGDataBaseAgent::AVGDataBaseAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_data_base_table = NULL;
    this->m_data_base_widget_class = NULL;
    this->m_data_base_widget = NULL;
    this->m_tutorial_agent = NULL;
}

void AVGDataBaseAgent::Start() {
}

