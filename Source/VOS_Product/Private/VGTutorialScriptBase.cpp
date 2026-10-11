#include "VGTutorialScriptBase.h"

UVGTutorialScriptBase::UVGTutorialScriptBase() {
    this->bHelpTextInitialVisiblity = true;
    this->PostQuotes.AddDefaulted(4);
}

int32 UVGTutorialScriptBase::ShowQuote(const FVGTutorialQuoteData& QuoteData, bool ShowImmediately) {
    return 0;
}

void UVGTutorialScriptBase::ShowInstructions() {
}

void UVGTutorialScriptBase::SetEnemyTeamRespawnTimes(const FName& teamName, int32 Times) {
}

void UVGTutorialScriptBase::ScriptStep_Implementation(float DeltaTime) {
}

void UVGTutorialScriptBase::ScriptEnd_Implementation() {
}

void UVGTutorialScriptBase::ScriptBegin_Implementation() {
}

void UVGTutorialScriptBase::RemoveInstructions() {
}

AVGTutorialScreenAgent* UVGTutorialScriptBase::OpenTutorialScreen(const FName& ID) {
    return NULL;
}

void UVGTutorialScriptBase::OnTriggerBoxOverlapBegin_Implementation(const FName& ScriptId) {
}

void UVGTutorialScriptBase::OnSubtitleCompleted_Implementation(int32 SubtitleId) {
}

void UVGTutorialScriptBase::OnOtherScriptStarted_Implementation(const FName& ScriptId) {
}

void UVGTutorialScriptBase::OnOtherScriptCompleted_Implementation(const FName& ScriptId) {
}

bool UVGTutorialScriptBase::IsShwoingPreQuote() const {
    return false;
}

bool UVGTutorialScriptBase::IsHudSubtitlesDisp() {
    return false;
}

AVGAITeam* UVGTutorialScriptBase::GetTeam(const FName& teamName) const {
    return NULL;
}

AVGBattleCharacter* UVGTutorialScriptBase::GetBattleCharacter() const {
    return NULL;
}

AActor* UVGTutorialScriptBase::GetActorByNameInWorld(const FString& Name) const {
    return NULL;
}

void UVGTutorialScriptBase::EndScriptWithPostQuote() {
}

