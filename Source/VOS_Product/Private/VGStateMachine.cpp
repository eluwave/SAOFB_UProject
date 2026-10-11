#include "VGStateMachine.h"

UVGStateMachine::UVGStateMachine() {
    this->StateClasses[0] = NULL;
    this->StateClasses[1] = NULL;
    this->StateClasses[2] = NULL;
    this->StateClasses[3] = NULL;
    this->StateClasses[4] = NULL;
    this->StateClasses[5] = NULL;
    this->StateClasses[6] = NULL;
    this->StateClasses[7] = NULL;
    this->StateClasses[8] = NULL;
    this->StateClasses[9] = NULL;
    this->StateClasses[10] = NULL;
    this->StateClasses[11] = NULL;
    this->StateClasses[12] = NULL;
    this->StateClasses[13] = NULL;
    this->m_owner = NULL;
    this->m_state_table[0] = NULL;
    this->m_state_table[1] = NULL;
    this->m_state_table[2] = NULL;
    this->m_state_table[3] = NULL;
    this->m_state_table[4] = NULL;
    this->m_state_table[5] = NULL;
    this->m_state_table[6] = NULL;
    this->m_state_table[7] = NULL;
    this->m_state_table[8] = NULL;
    this->m_state_table[9] = NULL;
    this->m_state_table[10] = NULL;
    this->m_state_table[11] = NULL;
    this->m_state_table[12] = NULL;
    this->m_state_table[13] = NULL;
    this->m_current_state = NULL;
    this->m_next_state = NULL;
    this->m_previous_state = NULL;
    this->m_pre_update_state = NULL;
    this->m_post_update_state = NULL;
}

