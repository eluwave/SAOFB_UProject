#include "VGRankingItem.h"

UVGRankingItem::UVGRankingItem() {
}

void UVGRankingItem::PlayAnimeEnd() {
}

EVGRegion::Type UVGRankingItem::GetRegion() const {
    return EVGRegion::Jp;
}

int32 UVGRankingItem::GetPrize() const {
    return 0;
}

UTexture2D* UVGRankingItem::GetFaceTexture() const {
    return NULL;
}

float UVGRankingItem::GetClearTime() const {
    return 0.0f;
}

FString UVGRankingItem::GetCharacterName() const {
    return TEXT("");
}

