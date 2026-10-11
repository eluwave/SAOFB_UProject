#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EVGAIEQSCategory.h"
#include "VGBTD_CheckEQSRunMode.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckEQSRunMode : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGAIEQSCategory m_category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvQueryRunMode::Type> m_run_mode;
    
public:
    UVGBTD_CheckEQSRunMode();

};

