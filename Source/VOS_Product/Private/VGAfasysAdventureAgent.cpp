#include "VGAfasysAdventureAgent.h"

AVGAfasysAdventureAgent::AVGAfasysAdventureAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_message_widget_class = NULL;
    this->m_selection_widget_class = NULL;
    this->m_message_widget = NULL;
    this->m_selection_widget = NULL;
}

void AVGAfasysAdventureAgent::Start() {
}

void AVGAfasysAdventureAgent::RequestSelectionMessage(const TArray<FText>& Items, const TArray<FText>& items2, const TArray<int32>& voice_id, const TArray<int32>& action_id, const TArray<FVGAfasysAdventureCommandFlag>& Flags, int32 DefaultIndex, const FString& tag) {
}

void AVGAfasysAdventureAgent::RequestSelection(const TArray<FText>& Items, const TArray<FVGAfasysAdventureCommandFlag>& Flags, int32 DefaultIndex, const FString& tag) {
}

void AVGAfasysAdventureAgent::RequestMessage(FText Message, FText Caption, int32 voice_id, int32 action_id) {
}

void AVGAfasysAdventureAgent::Finish() {
}

void AVGAfasysAdventureAgent::ClearAllRequest() {
}

