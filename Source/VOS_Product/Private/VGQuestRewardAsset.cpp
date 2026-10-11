#include "VGQuestRewardAsset.h"

FVGQuestRewardAsset::FVGQuestRewardAsset() {
    this->Type = EVGQuestReward::Invalid;
    this->amount = 0;
    this->amount_random = 0;
    this->group = 0;
    this->rate = 0.00f;
    this->attribute = 0;
}

