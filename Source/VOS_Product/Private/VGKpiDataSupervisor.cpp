#include "VGKpiDataSupervisor.h"

UVGKpiDataSupervisor::UVGKpiDataSupervisor() {
    this->m_cur_entry = NULL;
    this->m_http_obj = NULL;
}

void UVGKpiDataSupervisor::OnReceived(UNetMessage* Data) {
}

void UVGKpiDataSupervisor::OnError(int32 code, const FString& errmsg) {
}

