#include "VGUIActor.h"

AVGUIActor::AVGUIActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_use_navigation_bar = true;
    this->m_navigation_bar_class = NULL;
    this->m_blur_effect_ui_class = NULL;
    this->m_navigation_bar = NULL;
}

