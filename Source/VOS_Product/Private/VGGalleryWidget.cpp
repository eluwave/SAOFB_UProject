#include "VGGalleryWidget.h"

UVGGalleryWidget::UVGGalleryWidget() {
    this->bIsFocusable = true;
    this->cursor_move_delay_default = 0.00f;
    this->m_grid_view = NULL;
    this->m_navigation_bar = NULL;
    this->m_movie_data_table = NULL;
    this->m_visual_data_table = NULL;
    this->m_is_gallery_unlock_all = false;
}

void UVGGalleryWidget::SetIsInAnimationEnd(bool flag) {
}

