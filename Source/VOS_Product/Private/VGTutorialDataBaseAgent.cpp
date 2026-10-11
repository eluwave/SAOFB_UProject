#include "VGTutorialDataBaseAgent.h"

AVGTutorialDataBaseAgent::AVGTutorialDataBaseAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_data_base_table = NULL;
}

void AVGTutorialDataBaseAgent::StartTutorialDataBaseProgressFlagSet(UObject* Context, const FName& TutorialScreenDataId) {
}

bool AVGTutorialDataBaseAgent::StartProgressFlagSet(const FName& ID) {
    return false;
}

bool AVGTutorialDataBaseAgent::IsAnyTutorialDataBaseProgressFlagSet(UObject* Context) {
    return false;
}

