#include "VGDlcStaffRollGameMode.h"

AVGDlcStaffRollGameMode::AVGDlcStaffRollGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_skip_flag = 0;
    this->m_is_csv_platform_change = false;
    this->m_fade_in_time_override = -1.00f;
    this->m_agent_class = NULL;
    this->m_staff_roll_agent = NULL;
    this->m_table_asset = NULL;
}

