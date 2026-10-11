#include "VGAISpawnProjectile.h"

AVGAISpawnProjectile::AVGAISpawnProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->get_tag_by_blackboard = false;
    this->is_move_to_projectile = true;
    this->spawned_enemy_action_id = -1;
    this->spawn_max_num = -1;
    this->is_hate_copy = false;
    this->only_one_chara_for_spawner = false;
}

