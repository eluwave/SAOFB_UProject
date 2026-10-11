#include "VGTutorialTriggerBox.h"

AVGTutorialTriggerBox::AVGTutorialTriggerBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TriggerOnPrerequisiteType = EVGPrerequisiteTutorialType::None;
    this->TriggerOnOverLap = true;
    this->TriggerOnPrerequisiteReOverlap = false;
    this->m_is_overlapped = false;
    this->m_is_executing = false;
}

void AVGTutorialTriggerBox::OnTutorialScreenEnded(AActor* Actor) {
}

void AVGTutorialTriggerBox::OnScriptPostQuote(const FName& ScriptId) {
}

void AVGTutorialTriggerBox::OnScriptCompleted(const FName& ScriptId) {
}

void AVGTutorialTriggerBox::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AVGTutorialTriggerBox::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo) {
}

void AVGTutorialTriggerBox::OnGameStart() {
}

void AVGTutorialTriggerBox::Execute() {
}

