#include "VGCharacterBoneTransform.h"

FVGCharacterBoneTransform::FVGCharacterBoneTransform() {
    this->translation_mode = EVGBoneTransformMode::Ignore;
    this->rotation_mode = EVGBoneTransformMode::Ignore;
    this->scale_mode = EVGBoneTransformMode::Ignore;
}

