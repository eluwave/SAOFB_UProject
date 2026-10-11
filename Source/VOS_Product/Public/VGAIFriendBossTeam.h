#pragma once
#include "CoreMinimal.h"
#include "VGAITeam.h"
#include "VGUnitDeleteTimer.h"
#include "VGAIFriendBossTeam.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAIFriendBossTeam : public AVGAITeam {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_delete_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_alarm_time;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGUnitDeleteTimer> m_timers;
    
public:
    AVGAIFriendBossTeam(const FObjectInitializer& ObjectInitializer);

};

