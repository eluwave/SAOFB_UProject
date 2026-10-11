#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysEmotionSituation.generated.h"

UENUM(BlueprintType)
namespace EVGAfasysEmotionSituation {
    enum Type {
        MeetFriend,
        SbcWait,
        MyRoomWait,
        QuestOrder,
        QuestAchievement,
        PlayerEmotion,
        AdventureWait,
        BattleEnd,
        Num,
    };
}

