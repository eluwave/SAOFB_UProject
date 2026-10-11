#include "VGCharacterFigureSettingGenerator.h"

UVGCharacterFigureSettingGenerator::UVGCharacterFigureSettingGenerator() {
    this->m_male_configs.AddDefaulted(5);
    this->m_female_configs.AddDefaulted(5);
    this->m_default_height = 160.00f;
    this->m_npc_breast_param = NULL;
}

