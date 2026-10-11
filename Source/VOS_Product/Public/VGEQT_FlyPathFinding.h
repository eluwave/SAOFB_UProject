#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DoNNavigationQueryData.h"
#include "EVGBTFlyPathFindingTestMode.h"
#include "Templates/SubclassOf.h"
#include "VGEQT_FlyPathFinding.generated.h"

class ADonNavigationManager;
class UEnvQueryContext;
class UVGEQT_FlyPathFindingResult;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGEQT_FlyPathFinding : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBTFlyPathFindingTestMode m_test_mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> m_self_target;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_time_slice_max_trace;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_time_slice_num;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVGEQT_FlyPathFindingResult*> PathFindingResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ADonNavigationManager*> NavigationManagerList;
    
public:
    UVGEQT_FlyPathFinding();

protected:
    UFUNCTION(BlueprintCallable)
    void Pathfinding_OnFinish(const FDoNNavigationQueryData& Data);
    
};

