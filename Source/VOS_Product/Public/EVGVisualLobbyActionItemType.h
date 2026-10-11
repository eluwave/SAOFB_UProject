#pragma once
#include "CoreMinimal.h"
#include "EVGVisualLobbyActionItemType.generated.h"

UENUM(BlueprintType)
enum class EVGVisualLobbyActionItemType : uint8 {
    Ready,
    Cancel,
    QuestMenu,
    QuestDetail,
    QuestUndertake,
    QuestCancel,
    Invite,
    MemberDetail,
    PrivateSetting,
    PlayerKick,
    LeaveRoom,
    CustomData,
    CharacterSelect,
    VersusRuleDeathMatch,
    VersusRuleBossBattle,
    EditTeamFormation,
    CoopNPCList,
    Profile,
    VoiceSetting,
    AlphaTeamRequest,
    BravoTeamRequest,
    EitherOKRequest,
    Num,
};

