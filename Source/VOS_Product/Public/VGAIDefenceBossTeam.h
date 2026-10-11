#pragma once
#include "CoreMinimal.h"
#include "VGAITeam.h"
#include "VGAIDefenceBossTeam.generated.h"

class ATargetPoint;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAIDefenceBossTeam : public AVGAITeam {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATargetPoint* m_goal_point;
    
public:
    AVGAIDefenceBossTeam(const FObjectInitializer& ObjectInitializer);

};

