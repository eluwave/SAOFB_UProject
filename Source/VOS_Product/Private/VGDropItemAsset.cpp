#include "VGDropItemAsset.h"

UVGDropItemAsset::UVGDropItemAsset() {
    this->m_object.AddDefaulted(5);
    this->m_get_vfx = NULL;
    this->m_get_sound.AddDefaulted(5);
    this->m_drop_buff_rate = 0.00f;
    this->m_rarity_buff_rate = 0.00f;
}

