#include "VGQuestManager.h"

UVGQuestManager::UVGQuestManager() {
}

void UVGQuestManager::WithdrawQuests(FName client_id) {
}

UVGQuestRecord* UVGQuestManager::StartQuestByName(FName Name, FName client_id) {
    return NULL;
}

void UVGQuestManager::StartQuest(UVGQuestRecord* record) {
}

void UVGQuestManager::ReportTask(EVGQuestTask::Type Type, const FString& param, int32 value, bool isOverwrite) {
}

void UVGQuestManager::RegisterQuests(const TArray<UVGQuestRecord*>& records) {
}

void UVGQuestManager::RegisterQuest(UVGQuestRecord* record) {
}

UVGQuestRecord* UVGQuestManager::NewQuestByName(FName Name, FName client_id) {
    return NULL;
}

UVGQuestRecord* UVGQuestManager::GetQuestWithState(FName quest_id, FName client_id, EVGQuestState::Type State) const {
    return NULL;
}

EVGQuestTaskState::Type UVGQuestManager::GetQuestTaskState(FName quest_id, FName client_id, FName task_name) const {
    return EVGQuestTaskState::Wait;
}

EVGQuestState::Type UVGQuestManager::GetQuestState(FName quest_id, FName client_id) const {
    return EVGQuestState::Wanted;
}

UVGQuestRecord* UVGQuestManager::GetQuest(FName quest_id, FName ClientId) const {
    return NULL;
}

UVGQuestManager* UVGQuestManager::Get() {
    return NULL;
}

FText UVGQuestManager::GenerateTaskText(const FVGQuestTask& task, const UVGQuestRecord* record) {
    return FText::GetEmpty();
}

FText UVGQuestManager::GenerateRewardText(const FVGQuestReward& reward, int32 text_type) {
    return FText::GetEmpty();
}

UVGQuestAsset* UVGQuestManager::FindQuestAsset(const UVGQuestRecord* record) {
    return NULL;
}

UVGQuestRecord* UVGQuestManager::FindQuest(FName Name, FName client_id) {
    return NULL;
}

bool UVGQuestManager::EnumQuestsByClient(FName ClientId, TArray<UVGQuestRecord*>& OutVal) {
    return false;
}

void UVGQuestManager::DeleteQuestAtIndex(int32 index, bool RequestRemove) {
}

void UVGQuestManager::DeleteQuest(const UVGQuestRecord* record, bool RequestRemove) {
}

void UVGQuestManager::CreateQuests(const TArray<UVGQuestAsset*>& assets, FName client_id, TArray<UVGQuestRecord*>& OutVal) {
}

UVGQuestRecord* UVGQuestManager::CreateQuest(const UVGQuestAsset* Asset, FName client_id, bool check_trigger) {
    return NULL;
}

void UVGQuestManager::Completion(UVGQuestRecord* record) {
}

void UVGQuestManager::CancelQuest(UVGQuestRecord* record) {
}

