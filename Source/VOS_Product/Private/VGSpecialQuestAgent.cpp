#include "VGSpecialQuestAgent.h"

AVGSpecialQuestAgent::AVGSpecialQuestAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_quest_type = EVGSpecialQuest::FFA;
    this->m_close_after_wait_time = 0.00f;
}

