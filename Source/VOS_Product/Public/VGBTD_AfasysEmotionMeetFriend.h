#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "VGBTD_AfasysEmotionMeetFriend.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_AfasysEmotionMeetFriend : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_distance;
    
public:
    UVGBTD_AfasysEmotionMeetFriend();

};

