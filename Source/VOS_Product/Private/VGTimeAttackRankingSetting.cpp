#include "VGTimeAttackRankingSetting.h"

FVGTimeAttackRankingSetting::FVGTimeAttackRankingSetting() {
    this->character_type = EVGRankingCharacter::Other;
    this->quest_id = 0;
    this->clear_time = 0.00f;
    this->player_num = 0;
    this->Region = EVGRegion::Jp;
}

