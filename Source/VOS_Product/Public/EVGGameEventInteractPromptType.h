#pragma once
#include "CoreMinimal.h"
#include "EVGGameEventInteractPromptType.generated.h"

UENUM(BlueprintType)
enum class EVGGameEventInteractPromptType : uint8 {
    Talk,
    Take,
    Use,
    Push,
    Check,
    Resurrect,
    Purchase,
    Operate,
    Move,
    Enter,
    Leave,
    PurchaseWeapon,
    PurchaseGadget,
    ChangeOutfit,
    OnlinePvP,
    OnlineCoop,
    MedalExchange,
    RewardRanking,
    FeaturedPlayerRanking,
    OnlineRanking,
    BoBSimulation,
    ItemBox,
    DefensiveBattle,
    HeroQuest,
    None,
    Num,
};

