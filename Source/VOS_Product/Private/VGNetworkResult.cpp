#include "VGNetworkResult.h"

UVGNetworkResult::UVGNetworkResult() {
    this->bIsFocusable = true;
    this->m_time_limit = 10.99f;
    this->m_current_phase = EVGNetworkResultPhase::In;
    this->m_countdown_widget = NULL;
}

void UVGNetworkResult::SetResultParameters(const FVGNetworkResultParam& param) {
}

void UVGNetworkResult::SetQuestRecord(UVGQuestRecord* QuestRecord) {
}

void UVGNetworkResult::Open() {
}

void UVGNetworkResult::OnCountdownCompleted() {
}

FString UVGNetworkResult::GetFormattedTimeString(float Secs) const {
    return TEXT("");
}

void UVGNetworkResult::Close() {
}

void UVGNetworkResult::ChangePhase(EVGNetworkResultPhase phase) {
}

