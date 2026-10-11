#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EVGUnitCommand.h"
#include "VGBTD_CheckCommand.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckCommand : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGUnitCommand m_command;
    
public:
    UVGBTD_CheckCommand();

};

