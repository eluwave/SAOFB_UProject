#include "VGBattleTalkItem.h"

FVGBattleTalkItem::FVGBattleTalkItem() {
    this->m_header = NULL;
    this->m_main_character = NULL;
    this->m_target_character = NULL;
    this->m_group_id = EVGBattleTalkGroup::Ailments;
}

