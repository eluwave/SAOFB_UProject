#include "VGTutorialPageDetailWidget.h"

UVGTutorialPageDetailWidget::UVGTutorialPageDetailWidget() {
    this->m_icon_data = NULL;
    this->m_total_page = 0;
    this->m_current_page = 0;
}

void UVGTutorialPageDetailWidget::SetData(UTexture2D* Icon, const FText& Title, const FText& Description, int32 TotalPage, int32 CurrentPage) {
}

void UVGTutorialPageDetailWidget::NotifyCloseFinished() {
}

