#include "VGQuestTask.h"

FVGQuestTask::FVGQuestTask() {
    this->Type = EVGQuestTask::Manual;
    this->Count = 0;
    this->State = EVGQuestTaskState::Wait;
    this->progress_count = 0;
    this->attribute = 0;
}

