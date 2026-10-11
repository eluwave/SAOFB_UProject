#pragma once
#include "CoreMinimal.h"
#include "EVGMainMenuType.generated.h"

UENUM(BlueprintType)
enum class EVGMainMenuType : uint8 {
    CharacterMember,
    Character,
    Quest,
    Map,
    Community,
    PlayerCard,
    System,
    DataBase,
    Num,
    None,
};

