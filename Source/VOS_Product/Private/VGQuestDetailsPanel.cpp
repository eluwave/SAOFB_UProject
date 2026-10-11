#include "VGQuestDetailsPanel.h"

UVGQuestDetailsPanel::UVGQuestDetailsPanel() {
    this->m_switcher = NULL;
    this->m_gv_task = NULL;
    this->m_gv_reward = NULL;
    this->m_hero_icon_loader = NULL;
}

FText UVGQuestDetailsPanel::GetQuestTitle() const {
    return FText::GetEmpty();
}

int32 UVGQuestDetailsPanel::GetQuestLevel() const {
    return 0;
}

FText UVGQuestDetailsPanel::GetQuestDescription() const {
    return FText::GetEmpty();
}

int32 UVGQuestDetailsPanel::GetPageNum() const {
    return 0;
}

int32 UVGQuestDetailsPanel::GetPageIndex() const {
    return 0;
}

UTexture2D* UVGQuestDetailsPanel::GetHeroIcon(int32 index) {
    return NULL;
}

