#include "VGANSActionMovement.h"

UVGANSActionMovement::UVGANSActionMovement() {
    this->move_type = EVGActMoveType::Velocity;
    this->move_op = EVGActMoveOp::Set;
    this->is_reset = true;
    this->is_inertia = false;
}

