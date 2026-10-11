#pragma once
#include "CoreMinimal.h"
#include "EVGShopVoiceID.generated.h"

UENUM()
enum class EVGShopVoiceID : int32 {
    None,
    EnterShop,
    Buy,
    Sell,
    Appraise,
    Reinforce,
    Customize,
    Confirm,
    NotEnoughMoney,
    NotEnoughMaterial,
    Appraising,
    AppraisingRare,
    Result,
    ResultRare,
    StorageMax,
    ReinforceResult,
    CustomizeResult,
    BaughtInfo,
    SoldInfo,
    Browsing,
    CostumeMaking,
    CostumeResult,
    CostumeResultEpic,
    ENUM_MAX UMETA(Hidden),
};

