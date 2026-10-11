#include "VGGimmickExplosionTrap.h"

AVGGimmickExplosionTrap::AVGGimmickExplosionTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->hit_box_class = NULL;
    this->b_hit_override = true;
}

AVGHitBox* AVGGimmickExplosionTrap::SpawnExplosionHitBox() {
    return NULL;
}

