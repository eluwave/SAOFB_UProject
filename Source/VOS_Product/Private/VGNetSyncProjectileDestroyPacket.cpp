#include "VGNetSyncProjectileDestroyPacket.h"

FVGNetSyncProjectileDestroyPacket::FVGNetSyncProjectileDestroyPacket() {
    this->chara_id = 0;
    this->finish_flag = 0;
    this->projectile_id = 0;
    this->is_exec = false;
    this->Roll = 0;
    this->Yaw = 0;
    this->Pitch = 0;
}

