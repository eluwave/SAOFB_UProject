#include "VGTitleWidget.h"

UVGTitleWidget::UVGTitleWidget() {
    this->m_eula_widget_class = NULL;
    this->m_eula_widget = NULL;
    this->m_policy_widget_class = NULL;
    this->m_policy_widget_steam_class = NULL;
    this->m_policy_widget = NULL;
    this->m_gv_main = NULL;
    this->m_mode_info = NULL;
}

FString UVGTitleWidget::GetSystemLanguage() {
    return TEXT("");
}

FString UVGTitleWidget::GetGameVersion() {
    return TEXT("");
}

