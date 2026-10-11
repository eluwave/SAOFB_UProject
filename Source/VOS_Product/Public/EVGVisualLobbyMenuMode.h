#pragma once
#include "CoreMinimal.h"
#include "EVGVisualLobbyMenuMode.generated.h"

UENUM(BlueprintType)
enum class EVGVisualLobbyMenuMode : uint8 {
    ActionList,
    QuestMenu,
    QuestDetail,
    QuestUndertake,
    QuestCancel,
    MemberDetail,
    PrivateSetting,
    PlayerKick,
    Profile,
    VoiceSetting,
    EditTeamFormation,
    VersusRule,
    CharacterSelect,
    CoopNPCList,
    Num,
};

