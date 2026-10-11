#include "VGStatusBuff.h"

FVGStatusBuff::FVGStatusBuff() {
    this->Type = EVGStatusBuff::Attack;
    this->Op = EVGStatusBuffOp::Up;
    this->value = 0.00f;
    this->Time = 0.00f;
}

