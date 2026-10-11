#pragma once
#include "CoreMinimal.h"
#include "EVGPlayerActivityType.generated.h"

UENUM(BlueprintType)
enum class EVGPlayerActivityType : uint8 {
    CreateCostume,
    CustomizeWeapon,
    AppreciateItem,
    ExchangeMedal,
    PurchaseInformation,
    GiveMoneyToAfasys,
    ArrangeOutfit,
    OnlineCoopBossDefeat,
    OnlineBattleWin,
    Present,
    Date,
    Sleepover,
    ExtraCoopQuestCleared,
    HeroSingleQuestCleared,
    HeroPartyQuestCleared,
    Num,
};

