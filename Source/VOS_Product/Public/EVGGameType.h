#pragma once
#include "CoreMinimal.h"
#include "EVGGameType.generated.h"

UENUM(BlueprintType)
enum class EVGGameType : uint8 {
    Menu,
    Roam,
    Lobby,
    Single,
    Coop,
    Versus,
    TeamDeathmatch,
    FreeForAll,
    BattleRoyal,
    Defence,
    DefenceStory,
    CoopExtra,
    Mission,
    MissionParty,
    Abyss,
    AbyssLobby,
    None,
    Num,
};

