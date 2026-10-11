#include "VGSkillAsset.h"

UVGSkillAsset::UVGSkillAsset() {
    this->Header = NULL;
    this->recast_time = 0.00f;
    this->Unique = EVGSkillUnique::None;
    this->action_id = 0;
    this->begin_vfx = NULL;
    this->add_vfx = NULL;
    this->gadget_projectile = NULL;
    this->gadget_installation = NULL;
    this->gadget_knife = NULL;
    this->gadget_camo = NULL;
    this->single_bullet = NULL;
    this->multi_bullet_first = NULL;
    this->multi_bullet_second = NULL;
    this->parry_time = 0.00f;
}

