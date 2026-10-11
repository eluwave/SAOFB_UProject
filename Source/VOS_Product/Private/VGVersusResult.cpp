#include "VGVersusResult.h"

UVGVersusResult::UVGVersusResult() {
    this->enable_grade = false;
    this->m_rank_supervisor = NULL;
}

void UVGVersusResult::SetResultParameters(const FVGVersusResultParam& param) {
}

bool UVGVersusResult::IsExitOk() {
    return false;
}

FText UVGVersusResult::GetRankText(EVPOnlineRankType rank) {
    return FText::GetEmpty();
}

