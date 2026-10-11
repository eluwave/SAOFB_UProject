#include "VGPartyCommandWidget.h"

UVGPartyCommandWidget::UVGPartyCommandWidget() {
    this->m_current_command = EVGTeamCommand::FOLLOW;
    this->m_gv_param_list = NULL;
}

void UVGPartyCommandWidget::Open(EVGTeamCommand initial_command) {
}

void UVGPartyCommandWidget::Close(bool bRemove) {
}

