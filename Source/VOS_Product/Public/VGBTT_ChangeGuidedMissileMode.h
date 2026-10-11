#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EVGGuidedMissileMode.h"
#include "VGBTT_ChangeGuidedMissileMode.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTT_ChangeGuidedMissileMode : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGGuidedMissileMode m_mode;
    
public:
    UVGBTT_ChangeGuidedMissileMode();

};

