#include "VGPadUtil.h"

UVGPadUtil::UVGPadUtil() {
}

bool UVGPadUtil::WasInputKeyJustReleased(EVGPadKey::Type code, UObject* ContextObject, int32 index) {
    return false;
}

bool UVGPadUtil::WasInputKeyJustPressed(EVGPadKey::Type code, UObject* ContextObject, int32 index) {
    return false;
}

bool UVGPadUtil::IsInputKeyDown(EVGPadKey::Type code, UObject* ContextObject, int32 index) {
    return false;
}

FVector UVGPadUtil::GetInputVectorKeyState(EVGPadKey::Type code, UObject* ContextObject, int32 index) {
    return FVector{};
}

float UVGPadUtil::GetInputAnalogKeyState(EVGPadKey::Type code, UObject* ContextObject, int32 index) {
    return 0.0f;
}

