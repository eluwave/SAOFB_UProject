#include "VGTransitionDescBP.h"

FVGTransitionDescBP::FVGTransitionDescBP() {
    this->travel_type = EVGTransitionTravelType::Standalone;
    this->save_required = false;
    this->supress_battle_result = false;
}

