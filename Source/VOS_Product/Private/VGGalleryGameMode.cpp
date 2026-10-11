#include "VGGalleryGameMode.h"

AVGGalleryGameMode::AVGGalleryGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_gallery_widget_class = NULL;
    this->m_fade_in_time = 0.00f;
    this->m_gallery_widget = NULL;
}

