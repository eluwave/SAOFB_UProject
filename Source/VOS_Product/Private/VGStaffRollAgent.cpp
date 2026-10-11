#include "VGStaffRollAgent.h"

AVGStaffRollAgent::AVGStaffRollAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_create_widget_wait_time = 0.00f;
    this->m_interpolation_time = 0.00f;
    this->m_widget = NULL;
    this->m_table_asset = NULL;
}

void AVGStaffRollAgent::Start() {
}

