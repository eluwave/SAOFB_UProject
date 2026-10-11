#include "VGAdventureAgent.h"

AVGAdventureAgent::AVGAdventureAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_use_navigation_bar = false;
    this->m_message_widget_class = NULL;
    this->m_selection_widget_class = NULL;
    this->m_message_widget = NULL;
    this->m_selection_widget = NULL;
}

void AVGAdventureAgent::Start() {
}

void AVGAdventureAgent::RequestSelection(const TArray<FText>& Items, int32 DefaultIndex, const FString& tag, bool cancellable) {
}

void AVGAdventureAgent::RequestMessage(FText Message, FText Caption) {
}

void AVGAdventureAgent::Finish() {
}

void AVGAdventureAgent::ClearAllRequest() {
}

