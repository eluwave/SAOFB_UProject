#include "VGResultListAgent.h"
#include "VGSoundComponent.h"

AVGResultListAgent::AVGResultListAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_prize_result_widget_class = NULL;
    this->m_level_up_widget_class = NULL;
    this->m_reward_table = NULL;
    this->m_reputation_table = NULL;
    this->m_level_up_draw_time = 0.00f;
    this->m_sound_component = CreateDefaultSubobject<UVGSoundComponent>(TEXT("SoundComponent"));
    this->m_prize_result_widget = NULL;
    this->m_level_up_widget = NULL;
    this->m_voice = NULL;
}

