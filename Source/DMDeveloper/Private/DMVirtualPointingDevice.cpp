#include "DMVirtualPointingDevice.h"

UDMVirtualPointingDevice::UDMVirtualPointingDevice() {
    this->AnalogDeadzone = 0.20f;
    this->MovementMultiplier = 600.00f;
    this->bSwapAnalogSticks = false;
}

void UDMVirtualPointingDevice::EnableInputProcessor() {
}

void UDMVirtualPointingDevice::DisableInputProcessor() {
}

