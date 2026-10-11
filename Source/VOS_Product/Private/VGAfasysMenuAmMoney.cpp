#include "VGAfasysMenuAmMoney.h"

UVGAfasysMenuAmMoney::UVGAfasysMenuAmMoney() {
    this->m_count_up_time = 0.00f;
    this->m_total_money_view = NULL;
    this->m_top_money_view = NULL;
    this->m_bottom_money_view = NULL;
}

void UVGAfasysMenuAmMoney::SetFunctionMode(EVGAfasysMenuFunction::Type mode) {
}

void UVGAfasysMenuAmMoney::SetDepositMode(EVGAfasysMenuDepositsMode::Type mode) {
}

bool UVGAfasysMenuAmMoney::IsMoneyMove() const {
    return false;
}

EVGAfasysMenuDepositsMode::Type UVGAfasysMenuAmMoney::GetDepositMode() {
    return EVGAfasysMenuDepositsMode::Deposits;
}

