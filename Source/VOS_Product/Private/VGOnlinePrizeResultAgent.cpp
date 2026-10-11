#include "VGOnlinePrizeResultAgent.h"

AVGOnlinePrizeResultAgent::AVGOnlinePrizeResultAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_prize_result_widget_class = NULL;
    this->m_level_up_widget_class = NULL;
    this->m_level_up_draw_time = 0.00f;
    this->m_prize_result_widget = NULL;
    this->m_level_up_widget = NULL;
}

