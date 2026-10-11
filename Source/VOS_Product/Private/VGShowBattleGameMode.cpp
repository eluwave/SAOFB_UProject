#include "VGShowBattleGameMode.h"

AVGShowBattleGameMode::AVGShowBattleGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_tutorial_class = NULL;
    this->m_tutorial_data = NULL;
    this->m_tutorial_start_wait = 0;
    this->m_avater_customize_ref = NULL;
    this->m_force_time_setting = false;
    this->m_force_time = 0.00f;
    this->m_tutorial_help = NULL;
    this->m_quest_record = NULL;
}

void AVGShowBattleGameMode::OnCompleteQuest(const UVGQuestRecord* quest) {
}

void AVGShowBattleGameMode::ForceGoNextSituation() {
}

