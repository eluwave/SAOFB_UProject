#include "VGGameEventEntry.h"

FVGGameEventEntry::FVGGameEventEntry() {
    this->Type = EVGGameEventType::General;
    this->required_chunk = 0;
    this->start_type = EVGGameEventLaunchType::Automatic;
    this->is_actor_spawn_required = false;
    this->is_collision_ignored_on_spawn = false;
    this->actor_spawn_height_offset = 0.00f;
    this->is_footing_required = false;
    this->is_one_shot = false;
    this->is_permanent_tick_enabled = false;
    this->is_skip_enabled = false;
    this->contact_radius = 0.00f;
    this->prompt_type = EVGGameEventInteractPromptType::Talk;
}

