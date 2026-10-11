#include "VGPhysicsBodyParamModifier.h"

FVGPhysicsBodyParamModifier::FVGPhysicsBodyParamModifier() {
    this->m_type = EVGPhysicsBodyParam::InertiaTensorScaleX;
    this->m_value = 0.00f;
}

