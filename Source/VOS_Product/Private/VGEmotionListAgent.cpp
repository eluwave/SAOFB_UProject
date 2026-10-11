#include "VGEmotionListAgent.h"

AVGEmotionListAgent::AVGEmotionListAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_emotion_list_widget_class = NULL;
    this->m_free_text_input_class = NULL;
    this->m_emotion_list_tab_data = NULL;
    this->m_emotion_list_data = NULL;
    this->m_fixed_phrase_list_tab_data = NULL;
    this->m_fixed_phrase_list_tab_data_battle = NULL;
    this->m_fixed_phrase_list_data = NULL;
    this->m_emotion_list_widget = NULL;
    this->m_fixed_phrase_list_widget = NULL;
    this->m_free_text_input_agent = NULL;
}

void AVGEmotionListAgent::Start() {
}

