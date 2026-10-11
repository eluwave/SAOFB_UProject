#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EVGGameType.h"
#include "EVGWeaponDivision.h"
#include "Templates/SubclassOf.h"
#include "VGHitEffect.h"
#include "VGStatusAilment.h"
#include "VGUltimateGaugeScaleFactor.h"
#include "VGUltimate.generated.h"

class AVGUltimateLauncher;
class AVGUltimateLauncherArea;
class AVGUltimateSniper;
class UVGVfxSignalAsset;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGUltimate : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_gauge_max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_increase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGUltimateGaugeScaleFactor> scale_factor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVGWeaponDivision, int32> progress_flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVGGameType, float> death_penalty_map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGVfxSignalAsset*> assault_begin_vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGVfxSignalAsset*> assault_end_vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGHitEffect> assault_hit_effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGStatusAilment> assault_status_ailment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float assault_timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGUltimateSniper> sniper_bullet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGUltimateLauncher> launcher_bullet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGUltimateLauncher> launcher_bullet_second;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGUltimateLauncherArea> launcher_bullet_area;
    
    UVGUltimate();

};

