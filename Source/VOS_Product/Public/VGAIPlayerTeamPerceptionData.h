#pragma once
#include "CoreMinimal.h"
#include "VGAIPlayerTeamPerceptionData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAIPlayerTeamPerceptionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    FVGAIPlayerTeamPerceptionData();
};

