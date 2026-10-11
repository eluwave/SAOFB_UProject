#include "VGTDMResult.h"

UVGTDMResult::UVGTDMResult() {
    this->enable_grade = false;
    this->m_rank_supervisor = NULL;
}

void UVGTDMResult::SetResultParameters(const FVGTDMResultParam& param) {
}

bool UVGTDMResult::IsExitOk() {
    return false;
}

FText UVGTDMResult::GetRankText(EVPOnlineRankType rank) {
    return FText::GetEmpty();
}

