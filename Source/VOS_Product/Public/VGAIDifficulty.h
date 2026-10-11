#pragma once
#include "CoreMinimal.h"
#include "EVGGameDifficulty.h"
#include "VGAIDifficulty.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAIDifficulty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGGameDifficulty difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lv_addition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float aim_accuracy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ai_difficulty;
    
    FVGAIDifficulty();
};

