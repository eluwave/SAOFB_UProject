#pragma once
#include "CoreMinimal.h"
#include "EVGQuestTextVariable.generated.h"

UENUM(BlueprintType)
namespace EVGQuestTextVariable {
    enum Type {
        Character_0,
        Character_1,
        Mob_0 = 10,
        Mob_1,
        Item_0 = 20,
        Item_1,
        Location_0 = 30,
        Location_1,
        Emotion_0 = 40,
        Emotion_1,
        Skill_0 = 50,
        Achievement_0 = 60,
        Quest_0 = 70,
        ENUM_MAX UMETA(Hidden),
    };
}

