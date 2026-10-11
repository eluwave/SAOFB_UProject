#include "VGTicketAgent.h"

AVGTicketAgent::AVGTicketAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_alphabet_complete_item_id_left_no = 0;
    this->m_alphabet_complete_item_id_right_no = 0;
    this->m_alphabet_complete_num = 0;
    this->m_alphabet_complete_progress_flag = 0;
    this->m_item_table = NULL;
    this->m_asset = NULL;
}

void AVGTicketAgent::StartItemExchange() {
}

void AVGTicketAgent::StartItemBulkExchange() {
}

void AVGTicketAgent::StartAlphabetComplete() {
}

void AVGTicketAgent::SetTicketAsset(UVGTicketAsset* Asset) {
}

bool AVGTicketAgent::IsTicketPossess() {
    return false;
}

bool AVGTicketAgent::IsInventoryCapable() {
    return false;
}

bool AVGTicketAgent::IsAlphabetCompleteReward() {
    return false;
}

int32 AVGTicketAgent::GetTicketPossessionAmount() {
    return 0;
}

void AVGTicketAgent::Close() {
}

