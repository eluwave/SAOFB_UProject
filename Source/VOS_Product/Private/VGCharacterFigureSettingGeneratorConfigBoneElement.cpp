#include "VGCharacterFigureSettingGeneratorConfigBoneElement.h"

FVGCharacterFigureSettingGeneratorConfigBoneElement::FVGCharacterFigureSettingGeneratorConfigBoneElement() {
    this->Type = EVGCharacterFigureSettingTransformType::Translation;
    this->Axis = EVGCharacterFigureSettingAxisType::X;
    this->Delta = 0.00f;
    this->BaseOffset = 0.00f;
    this->Unpropagative = false;
}

