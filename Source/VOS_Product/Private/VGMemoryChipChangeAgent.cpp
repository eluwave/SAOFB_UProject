#include "VGMemoryChipChangeAgent.h"

AVGMemoryChipChangeAgent::AVGMemoryChipChangeAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_character_select_widget_class = NULL;
    this->m_memory_chip_change_widget_class = NULL;
    this->m_character_list_widget = NULL;
    this->m_memory_chip_change_widget = NULL;
    this->m_subscene = NULL;
    this->m_dialog = NULL;
}

