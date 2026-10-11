#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BT_FlyToTarget_DebugParams.h"
#include "DoNNavigationQueryData.h"
#include "DoNNavigationQueryParams.h"
#include "DonNavigationDynamicCollisionPayload.h"
#include "BTTask_FlyTo.generated.h"

class ADonNavigationManager;

UCLASS(Blueprintable)
class DONAINAVIGATION_API UBTTask_FlyTo : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector FlightLocationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector FlightResultKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector KeyToFlipFlopWhenTaskExits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumProximityRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoNNavigationQueryParams QueryParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBT_FlyToTarget_DebugParams DebugParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADonNavigationManager* NavigationManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ADonNavigationManager*> NavigationManagerList;
    
public:
    UBTTask_FlyTo();

    UFUNCTION(BlueprintCallable)
    void Pathfinding_OnFinish(const FDoNNavigationQueryData& Data);
    
    UFUNCTION(BlueprintCallable)
    void Pathfinding_OnDynamicCollisionAlert(const FDonNavigationDynamicCollisionPayload& Data);
    
};

