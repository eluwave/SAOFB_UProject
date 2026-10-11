#include "VGNetworkRankingItem.h"

UVGNetworkRankingItem::UVGNetworkRankingItem() {
}

void UVGNetworkRankingItem::TabChangeStartAnimationEnd() {
}

void UVGNetworkRankingItem::TabChangeEndAnimationEnd() {
}

void UVGNetworkRankingItem::PlayAnimeEnd() {
}

EVGRegion::Type UVGNetworkRankingItem::GetRegion() const {
    return EVGRegion::Jp;
}

int32 UVGNetworkRankingItem::GetPrize() const {
    return 0;
}

int32 UVGNetworkRankingItem::GetPlayerNum() const {
    return 0;
}

UTexture2D* UVGNetworkRankingItem::GetHeroCharaIcon(int32 index) {
    return NULL;
}

UTexture2D* UVGNetworkRankingItem::GetFaceTexture() const {
    return NULL;
}

float UVGNetworkRankingItem::GetClearTime() const {
    return 0.0f;
}

FString UVGNetworkRankingItem::GetCharacterName() const {
    return TEXT("");
}

FText UVGNetworkRankingItem::GetAfasysPocketMoney() const {
    return FText::GetEmpty();
}

