#pragma once
#include "CoreMinimal.h"
#include "EVGPlatformOptionSetting.generated.h"

UENUM(BlueprintType)
enum class EVGPlatformOptionSetting : uint8 {
    WindowMode,
    ScreenResolution,
    ScreenPercentage,
    VSync,
    FrameRate,
    ScreenSpaceAmbientOcclusion,
    DepthOfField,
    MotionBlur,
    AntiAliasingQuality,
    ShadowQuality,
    TextureQuality,
    KeyAssignment,
    Language,
};

