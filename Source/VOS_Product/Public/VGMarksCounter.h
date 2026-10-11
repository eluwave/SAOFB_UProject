#pragma once
#include "CoreMinimal.h"
#include "EVGCharaTeam.h"
#include "VGMarksActionCounter.h"
#include "VGMarksCounter.generated.h"

USTRUCT(BlueprintType)
struct FVGMarksCounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EVGCharaTeam Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float gauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 lv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float combo_timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGMarksActionCounter> action_counters;
    
    VOS_PRODUCT_API FVGMarksCounter();
};

