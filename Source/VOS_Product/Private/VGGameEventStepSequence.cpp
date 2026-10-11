#include "VGGameEventStepSequence.h"

UVGGameEventStepSequence::UVGGameEventStepSequence() {
    this->m_message_feeder = NULL;
    this->m_screen_widget = NULL;
    this->m_actor_holder = NULL;
    this->m_old_view_target = NULL;
    this->m_event_actor = NULL;
}

void UVGGameEventStepSequence::SetMessageVisibility(bool value) {
}

void UVGGameEventStepSequence::SetMessageSelectionIndex(int32 index) {
}

void UVGGameEventStepSequence::SetMessageSelection(FName StepName, const TArray<FVGGameEventStepSelectionEntry>& Selection) {
}

void UVGGameEventStepSequence::SetMessageContent(FName StepName, FVGTextSymbol Caption, FVGTextSymbol Message, FName speaker) {
}

void UVGGameEventStepSequence::OnUpdate_Implementation(FName StepName, float DeltaTime) {
}

void UVGGameEventStepSequence::OnStart_Implementation() {
}

bool UVGGameEventStepSequence::OnQueryStepCompletion_Implementation(FName StepName) const {
    return false;
}

void UVGGameEventStepSequence::OnEndStep_Implementation(FName StepName) {
}

void UVGGameEventStepSequence::OnEnd_Implementation() {
}

void UVGGameEventStepSequence::OnDecideSelection_Implementation(FName StepName, int32 SelectionIndex) {
}

void UVGGameEventStepSequence::OnBeginStep_Implementation(FName StepName) {
}

bool UVGGameEventStepSequence::IsMessageVisible() const {
    return false;
}

bool UVGGameEventStepSequence::HasEnvironmentOption(FName Key) {
    return false;
}

UVGGameEventBase* UVGGameEventStepSequence::GetParentEvent() const {
    return NULL;
}

FString UVGGameEventStepSequence::GetEnvironmentOption(FName Key) {
    return TEXT("");
}

ACameraActor* UVGGameEventStepSequence::GetCameraActor() const {
    return NULL;
}

AActor* UVGGameEventStepSequence::GetActor(FName tag) {
    return NULL;
}

void UVGGameEventStepSequence::AddWaitStep(const FVGGameEventStepCommandWait& Wait) {
}

void UVGGameEventStepSequence::AddMessageStep(const FVGGameEventStepCommandMessage& Message) {
}

