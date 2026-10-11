#pragma once
#include "CoreMinimal.h"
#include "EVGOptionSetting.generated.h"

UENUM(BlueprintType)
enum class EVGOptionSetting : uint8 {
    None,
    BGMVolume,
    SEVolume,
    VoiceVolume,
    CameraSpeedX,
    CameraSpeedY,
    AimCameraSpeedX,
    AimCameraSpeedY,
    ScopeCameraSpeedX,
    ScopeCameraSpeedY,
    CameraHorizontal,
    CameraVertical,
    ControllerType,
    ControllerVibration,
    StatusDisplay,
    StatusDisplayAlways,
    FriendStatus3DDisplay,
    EnemyStatus3DDisplay,
    GunSightDisplay,
    MiniMapDirectionFixed,
    MiniMapDisplay,
    MiniMapRange,
    PriseDisplay,
    DamageDisplay,
    LogWindowDisplay,
    ScreenBrightness,
    MessageSpeed,
    DemoSubtitleDisplay,
    Difficulty,
    SendPlayerCard,
    ReceivePlayerCard,
    JoinAfasys,
    VoiceChat,
    AimAssist,
    IncreaseReputation,
    Num,
};

