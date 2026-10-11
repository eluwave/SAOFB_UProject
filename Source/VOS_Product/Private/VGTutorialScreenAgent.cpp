#include "VGTutorialScreenAgent.h"

AVGTutorialScreenAgent::AVGTutorialScreenAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_screen_data_index = NULL;
    this->m_screen_data = NULL;
    this->m_tutorial_widget = NULL;
    this->m_tutorial_widget_class = NULL;
    this->m_data_base_table = NULL;
}

bool AVGTutorialScreenAgent::QueryOpen(const FName& ID) {
    return false;
}

AVGTutorialScreenAgent* AVGTutorialScreenAgent::OpenTutorialScreen(UObject* Context, const FName& TutorialScreenDataId) {
    return NULL;
}

bool AVGTutorialScreenAgent::IsAnyTutorialScreenUp(UObject* Context, bool StrictCheck) {
    return false;
}

void AVGTutorialScreenAgent::CloseTutorialScreen(UObject* Context) {
}

void AVGTutorialScreenAgent::Close() {
}

