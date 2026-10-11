#include "VGSkillEquipTabSlotList.h"

UVGSkillEquipTabSlotList::UVGSkillEquipTabSlotList() {
    this->m_skill_base = NULL;
    this->m_skill_slot_list = NULL;
    this->m_gadget_base = NULL;
    this->m_gadget_slot_list = NULL;
    this->m_gv_tab = NULL;
}

void UVGSkillEquipTabSlotList::LeaveItems() {
}

FText UVGSkillEquipTabSlotList::GetCurrentTabText() const {
    return FText::GetEmpty();
}

void UVGSkillEquipTabSlotList::EnterItems() {
}

