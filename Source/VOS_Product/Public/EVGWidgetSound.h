#pragma once
#include "CoreMinimal.h"
#include "EVGWidgetSound.generated.h"

UENUM(BlueprintType)
namespace EVGWidgetSound {
    enum Type {
        IndexChange,
        Decide,
        Cancel,
        Error,
        TabChange,
        OpenWidget,
        CloseWidget,
        HudSkillSetOn,
        HudSkillSetOff,
        HudSkillSetChange,
        HudQuestNotify,
        SpinUpDown,
        Override00 = 100,
        Override01,
        Override02,
        Override03,
        Override04,
        Override05,
        ENUM_MAX UMETA(Hidden),
    };
}

