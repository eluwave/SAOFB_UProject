#include "VGSaveAfasysDataChunk.h"

FVGSaveAfasysDataChunk::FVGSaveAfasysDataChunk() {
    this->afasys_talk_count = 0;
    this->talk_count = 0;
    this->shoping_type = EVGAfasysMenuShoping::Miser;
    this->old_shoping_type = EVGAfasysMenuShoping::Miser;
    this->shoping_priority_item = EVGAfasysMenuPriorityItem::Weapon;
    this->old_shoping_priority_item = EVGAfasysMenuPriorityItem::Weapon;
    this->shoping_quest_clear_count = 0;
    this->pocket_money = 0;
    this->grand_total_pocket_money = 0;
    this->bank_money = 0;
    this->bank_money_new = 0;
    this->bank_money_rate = 0;
    this->bank_money_operation = EVGAfasysMenuBankMoneyOperation::Solid;
    this->bank_money_quest_clear_count = 0;
    this->ai_type = EVGAfasysAIType::Attack;
    this->ai_battle_style_type = EVGAfasysAIBattleStyle::Warlike;
    this->ai_recovery_type = EVGAfasysAIRecovery::Safety;
    this->ai_rescue_type = EVGAfasysAIRescue::Resuscitation;
    this->costume_change_time = 0;
    this->hair_change_time = 0;
}

