#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "VGSensing.h"
#include "VGBTT_ChangeSensing.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTT_ChangeSensing : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSensing m_sensing;
    
public:
    UVGBTT_ChangeSensing();

};

