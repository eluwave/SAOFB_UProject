#pragma once
#include "CoreMinimal.h"
#include "EVPOnlineCommentType.generated.h"

UENUM(BlueprintType)
enum class EVPOnlineCommentType : uint8 {
    Nothing,
    EveryonePlay,
    BeginnersPlay,
    FriendWanted,
    SupportWanted,
    GoliathWanted,
    SeriouslyPlay,
    LetsChill,
    HelpMe,
    ToLongPlay,
    Num,
    None,
};

