#include "VGQuestLibrary.h"

UVGQuestLibrary::UVGQuestLibrary() {
    this->m_lib_quest = NULL;
}

UVGQuestLibrary* UVGQuestLibrary::Get() {
    return NULL;
}

UVGQuestAsset* UVGQuestLibrary::FindQuest(FName Name) const {
    return NULL;
}

void UVGQuestLibrary::EnumQuestAsset(int32 categoryMask, const FString& regex, TArray<UVGQuestAsset*>& OutVal) {
}

