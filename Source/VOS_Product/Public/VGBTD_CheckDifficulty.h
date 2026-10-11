#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "VGBTD_CheckDifficulty.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckDifficulty : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_difficulty;
    
public:
    UVGBTD_CheckDifficulty();

};

