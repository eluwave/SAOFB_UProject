#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EVGBTComparision.h"
#include "VGBTD_CheckTeamMemberNum.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckTeamMemberNum : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_check_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBTComparision m_comparision;
    
public:
    UVGBTD_CheckTeamMemberNum();

};

