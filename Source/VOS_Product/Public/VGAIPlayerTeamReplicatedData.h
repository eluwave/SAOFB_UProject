#pragma once
#include "CoreMinimal.h"
#include "VGAIPlayerTeamPerceptionData.h"
#include "VGAIPlayerTeamReplicatedData.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAIPlayerTeamReplicatedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAIPlayerTeamPerceptionData> perception_actors;
    
    FVGAIPlayerTeamReplicatedData();
};

