#include "VGPrizeResultItem.h"

UVGPrizeResultItem::UVGPrizeResultItem() {
    this->m_count_up_time = 0.00f;
    this->m_is_count_up_enable.AddDefaulted(2);
}

void UVGPrizeResultItem::PlayAnimeEnd() {
}

bool UVGPrizeResultItem::IsSkip() {
    return false;
}

int32 UVGPrizeResultItem::GetPrize() const {
    return 0;
}

int32 UVGPrizeResultItem::GetAmount() const {
    return 0;
}

