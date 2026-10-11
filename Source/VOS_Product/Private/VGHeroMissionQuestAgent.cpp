#include "VGHeroMissionQuestAgent.h"

AVGHeroMissionQuestAgent::AVGHeroMissionQuestAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_mission_quest_type = EVGHeroMissionQuest::Single;
    this->m_hero_select_agent = NULL;
    this->m_hero_icon_loader = NULL;
    this->m_hero_selectable_data_table = NULL;
}

