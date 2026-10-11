#include "VGAIEQSRunMode.h"

FVGAIEQSRunMode::FVGAIEQSRunMode() {
    this->Category = EVGAIEQSCategory::FindFiringSpot;
    this->run_mode = EEnvQueryRunMode::SingleResult;
}

