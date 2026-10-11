#include "VGShopAgent.h"
#include "VGSoundComponent.h"

AVGShopAgent::AVGShopAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_shop_action_widget_class = NULL;
    this->m_shop_widget_class = NULL;
    this->m_exchange_widget_class = NULL;
    this->m_exchange_dialog_class = NULL;
    this->m_appraise_widget_class = NULL;
    this->m_appraise_effect_widget_class = NULL;
    this->m_message_window_class = NULL;
    this->m_reputation_value[0] = 0;
    this->m_reputation_value[1] = 0;
    this->m_reputation_value[2] = 0;
    this->m_reputation_value[3] = 0;
    this->m_reputation_value[4] = 0;
    this->m_reputation_value[5] = 0;
    this->m_reputation_value[6] = 0;
    this->m_reputation_value[7] = 0;
    this->m_reputation_value[8] = 0;
    this->m_reputation_value[9] = 0;
    this->m_reputation_value[10] = 0;
    this->m_reputation_value[11] = 0;
    this->m_reputation_value[12] = 0;
    this->m_clerk_setting = NULL;
    this->m_clerk_figure = NULL;
    this->m_clerk_motion = NULL;
    this->m_price_rate = 0.00f;
    this->m_shop_action_widget = NULL;
    this->m_shop_widget = NULL;
    this->m_exchange_widget = NULL;
    this->m_appraise_widget = NULL;
    this->m_info_shop_widget = NULL;
    this->m_dialog = NULL;
    this->m_subscene = NULL;
    this->m_tutorial_agent = NULL;
    this->m_appraise_se = NULL;
    this->m_sound_component = CreateDefaultSubobject<UVGSoundComponent>(TEXT("SoundComponent"));
    this->m_voice_cue_sheet = NULL;
    this->m_lip_data_pack = NULL;
}

void AVGShopAgent::Start() {
}

void AVGShopAgent::SetShopAsset(UVGShopAsset* Asset) {
}

void AVGShopAgent::SetPriceRate(float value) {
}

void AVGShopAgent::Provide(EVGShopService::Type service, UVGShopInventoryData* inv, FText Text, FText desc_text) {
}

