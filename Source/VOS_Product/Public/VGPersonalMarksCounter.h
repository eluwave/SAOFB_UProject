#pragma once
#include "CoreMinimal.h"
#include "VGMarksActionCounter.h"
#include "VGMarksDamageReport.h"
#include "VGMarksGoodActionFormingReport.h"
#include "VGMarksHealReport.h"
#include "VGPersonalMarksCounter.generated.h"

class AVGBattleCharacter;

USTRUCT(BlueprintType)
struct FVGPersonalMarksCounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGBattleCharacter* Chara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGMarksActionCounter> action_counters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGMarksHealReport> marks_heal_log;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGMarksDamageReport> marks_damage_log;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGMarksGoodActionFormingReport> marks_good_log;
    
    VOS_PRODUCT_API FVGPersonalMarksCounter();
};

