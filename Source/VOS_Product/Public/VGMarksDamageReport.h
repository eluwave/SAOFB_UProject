#pragma once
#include "CoreMinimal.h"
#include "EVGWeaponDivision.h"
#include "VGMarksReport.h"
#include "VGMarksDamageReport.generated.h"

USTRUCT(BlueprintType)
struct FVGMarksDamageReport : public FVGMarksReport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 chara_hit_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGWeaponDivision weapon_division;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 damage_result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_invincible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_dead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_hit_report;
    
    VOS_PRODUCT_API FVGMarksDamageReport();
};

