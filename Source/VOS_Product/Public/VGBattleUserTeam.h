#pragma once
#include "CoreMinimal.h"
#include "EVGCharaTeam.h"
#include "VGBattleUserTeam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGBattleUserTeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaTeam Team;
    
    FVGBattleUserTeam();
};

