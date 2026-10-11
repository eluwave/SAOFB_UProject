#include "VGGameEventBase.h"

UVGGameEventBase::UVGGameEventBase() {
    this->m_supervisor = NULL;
    this->m_actor = NULL;
    this->m_locator = NULL;
}

bool UVGGameEventBase::ShouldSuspend_Implementation() {
    return false;
}

bool UVGGameEventBase::ShouldResume_Implementation() {
    return false;
}

void UVGGameEventBase::OnUpdate_Implementation(float DeltaTime) {
}

void UVGGameEventBase::OnReset_Implementation() {
}

void UVGGameEventBase::OnRequestToStop_Implementation() {
}

void UVGGameEventBase::OnPostEndEvent_Implementation() {
}

void UVGGameEventBase::OnLaunch_Implementation(AActor* SpawnActor, AVGGameEventLocator* locator) {
}

void UVGGameEventBase::OnInitialize_Implementation() {
}

void UVGGameEventBase::OnEndEvent_Implementation() {
}

void UVGGameEventBase::OnEndContact_Implementation() {
}

void UVGGameEventBase::OnBeginFirstContact_Implementation() {
}

void UVGGameEventBase::OnBeginEvent_Implementation(bool IsExclusive) {
}

void UVGGameEventBase::OnBeginContact_Implementation() {
}

void UVGGameEventBase::NotifyEndEventWithTransition() {
}

void UVGGameEventBase::NotifyEndEvent() {
}

void UVGGameEventBase::NotifyBeginEventExclusive() {
}

void UVGGameEventBase::NotifyBeginEvent() {
}

bool UVGGameEventBase::IsLaunchable_Implementation() {
    return false;
}

AVGGameEventLocator* UVGGameEventBase::GetLocator() const {
    return NULL;
}

FName UVGGameEventBase::GetEventId() const {
    return NAME_None;
}

AActor* UVGGameEventBase::GetActor() const {
    return NULL;
}

