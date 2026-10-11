#include "VGFFAResultAgent.h"

AVGFFAResultAgent::AVGFFAResultAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_result_widget_class = NULL;
    this->m_result_widget = NULL;
}

void AVGFFAResultAgent::Start() {
}

void AVGFFAResultAgent::SetResultParameters(TArray<FVGQuestReward>& rewards) {
}

void AVGFFAResultAgent::SetDispResult(TArray<EVGFFADispResult>& Results) {
}

bool AVGFFAResultAgent::IsInitialized() const {
    return false;
}

bool AVGFFAResultAgent::IsDispResult(EVGFFADispResult result) {
    return false;
}

void AVGFFAResultAgent::Exit() {
}

