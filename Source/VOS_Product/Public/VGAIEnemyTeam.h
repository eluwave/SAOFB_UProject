#pragma once
#include "CoreMinimal.h"
#include "VGAIEnemyTeam.generated.h"

class AVGAITeam;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAIEnemyTeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGAITeam* Team;
    
    FVGAIEnemyTeam();
};

