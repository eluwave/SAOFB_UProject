#include "VGFriendListAgent.h"

AVGFriendListAgent::AVGFriendListAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_friend_list_widget_class = NULL;
    this->m_calc_component_class = NULL;
    this->m_friend_list_widget = NULL;
    this->m_calc_component = NULL;
    this->m_passive_skill_component = NULL;
    this->m_subscene = NULL;
}

void AVGFriendListAgent::Start() {
}

void AVGFriendListAgent::SetMode(EVGFriendListMode mode) {
}

