#pragma once
#include "CoreMinimal.h"
#include "EVGWeaponBulletType.generated.h"

UENUM(BlueprintType)
enum class EVGWeaponBulletType : uint8 {
    HG_Bullet,
    PDW_Bullet,
    HG_L_Bullet,
    SG_Bullet,
    AR_Bullet,
    AR_HS_Bullet,
    SR_Bullet,
    SR_AM_Bullet,
    HF_Bullet,
    HF_L_Bullet,
    LC_R_Bullet,
    LC_G_Bullet,
    LC_HM_Bullet,
    HG_EP,
    SG_EP,
    AR_EP,
    SR_EP,
    HF_EP,
    LC_EP,
    Num,
};

