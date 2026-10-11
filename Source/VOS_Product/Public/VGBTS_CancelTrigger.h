#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EVGInputKeyOption.h"
#include "EVGPadKey.h"
#include "VGBTS_CancelTrigger.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTS_CancelTrigger : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_target_key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EVGPadKey::Type>> m_keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGInputKeyOption::Type> m_option;
    
public:
    UVGBTS_CancelTrigger();

};

