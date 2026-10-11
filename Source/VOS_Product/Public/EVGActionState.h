#pragma once
#include "CoreMinimal.h"
#include "EVGActionState.generated.h"

UENUM(BlueprintType)
enum class EVGActionState : uint8 {
    Idle,
    Walk,
    Jog,
    Run,
    Kneeling,
    Dead,
    Air,
    Jump,
    Fall,
    Land,
    Down,
    Rise,
    Aim,
    Fire,
    Reload,
    Weapon,
    Attack,
    Skill,
    Damage,
    Wire,
    Throwing,
    Shift,
    Back,
    StartAction,
    EndAction,
    Turn,
    Emotion,
    FixedShooting,
    GameOver,
    DisableBlackHoleMovement,
    Num,
};

