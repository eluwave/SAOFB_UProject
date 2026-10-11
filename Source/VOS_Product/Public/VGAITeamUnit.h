#pragma once
#include "CoreMinimal.h"
#include "VGAITeamUnit.generated.h"

class AVGBattleCharacter;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAITeamUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGBattleCharacter* Actor;
    
    FVGAITeamUnit();
};

