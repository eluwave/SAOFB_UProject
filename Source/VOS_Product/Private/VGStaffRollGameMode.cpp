#include "VGStaffRollGameMode.h"

AVGStaffRollGameMode::AVGStaffRollGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_agent_class = NULL;
    this->m_staff_roll_agent = NULL;
    this->m_table_asset = NULL;
    this->m_link_progress_flag_table_asset = NULL;
}

