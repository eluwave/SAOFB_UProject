#include "VGANSAIDodgeAction.h"

UVGANSAIDodgeAction::UVGANSAIDodgeAction() {
    this->m_target = 0;
    this->m_radius = 340282346638528859811704183484516925440.00f;
    this->m_action = EVGDodgeAction::Rolling;
    this->m_probability = 100.00f;
}

