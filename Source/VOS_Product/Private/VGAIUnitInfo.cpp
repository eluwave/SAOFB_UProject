#include "VGAIUnitInfo.h"

FVGAIUnitInfo::FVGAIUnitInfo() {
    this->Perception = false;
    this->on_sight = false;
    this->reliability = 0.00f;
    this->unknown = false;
    this->in_battle = false;
    this->is_targeted_bulletline = false;
    this->attackable = false;
    this->Distance = 0.00f;
    this->Hate = 0.00f;
    this->max_hate = 0.00f;
    this->update_hate = false;
    this->total_damage = 0.00f;
    this->apply_camouflage = false;
}

