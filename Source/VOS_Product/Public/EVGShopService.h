#pragma once
#include "CoreMinimal.h"
#include "EVGShopService.generated.h"

UENUM(BlueprintType)
namespace EVGShopService {
    enum Type {
        Buy,
        Sell,
        Exchange,
        Appraise,
        Reinforce,
        Customize,
        Unleash,
        BuyInfo,
        SellInfo,
        MakeCostume,
        AccessoryReinforce,
        AccessoryCustomize,
        AdmissionRestriction,
        ENUM_MAX UMETA(Hidden),
    };
}

