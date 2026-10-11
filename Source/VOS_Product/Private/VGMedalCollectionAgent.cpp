#include "VGMedalCollectionAgent.h"

AVGMedalCollectionAgent::AVGMedalCollectionAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_medal_collection_widget_class = NULL;
    this->m_score_streak_class = NULL;
    this->m_medal_collection_widget = NULL;
    this->m_score_streak = NULL;
}

void AVGMedalCollectionAgent::Start() {
}

