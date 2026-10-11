#include "VGEULAWidget.h"

UVGEULAWidget::UVGEULAWidget() {
    this->m_lang_widget_class = NULL;
    this->m_lang_index = 0;
    this->m_regon_index = 0;
    this->m_page_index = 0;
    this->m_page_num = 0;
    this->m_button_show = false;
    this->m_agree = false;
    this->m_gv_buttons = NULL;
    this->m_lang_widget = NULL;
}

void UVGEULAWidget::OnClosed() {
}

