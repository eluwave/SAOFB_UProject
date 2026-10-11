#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "VGBTD_CheckUnitUserSpec.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckUnitUserSpec : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_check_index;
    
public:
    UVGBTD_CheckUnitUserSpec();

};

