#pragma once
#include "CoreMinimal.h"
#include "DoNNavigationDebugParams.h"
#include "BT_FlyToTarget_DebugParams.generated.h"

USTRUCT(BlueprintType)
struct FBT_FlyToTarget_DebugParams : public FDoNNavigationDebugParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisualizePawnAsVoxels;
    
    DONAINAVIGATION_API FBT_FlyToTarget_DebugParams();
};

