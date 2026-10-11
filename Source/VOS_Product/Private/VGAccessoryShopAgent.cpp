#include "VGAccessoryShopAgent.h"

AVGAccessoryShopAgent::AVGAccessoryShopAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_accessory_reinforce_widget_class = NULL;
    this->m_accessory_customize_widget_class = NULL;
    this->m_reinforce_widget = NULL;
    this->m_customize_widget = NULL;
}

