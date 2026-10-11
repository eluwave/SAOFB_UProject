#include "VGTutorialInformationBoardWidget.h"

UVGTutorialInformationBoardWidget::UVGTutorialInformationBoardWidget() {
    this->bIsFocusable = true;
    this->m_widget_switcher = NULL;
    this->m_current_active_widget = NULL;
    this->m_page_index = 0;
    this->m_page_text = NULL;
    this->m_title_text = NULL;
}

void UVGTutorialInformationBoardWidget::SetPage(int32 NewPageIndex, bool FirstTime) {
}

void UVGTutorialInformationBoardWidget::QueryClose() {
}

void UVGTutorialInformationBoardWidget::PrevPage() {
}

void UVGTutorialInformationBoardWidget::Open(UVGTutorialScreenData* ScreenData, int32 ZOrder) {
}

void UVGTutorialInformationBoardWidget::NextPage() {
}

void UVGTutorialInformationBoardWidget::Close() {
}

