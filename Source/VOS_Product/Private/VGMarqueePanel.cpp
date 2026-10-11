#include "VGMarqueePanel.h"
#include "Layout/Clipping.h"
UVGMarqueePanel::UVGMarqueePanel() {
    this->Clipping = EWidgetClipping::ClipToBounds;
    this->m_enable_scroll = false;
}

void UVGMarqueePanel::ResetScroll() {
}

