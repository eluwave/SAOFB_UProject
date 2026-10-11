#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "VGBTT_FluctuateHate.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTT_FluctuateHate : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_hate_point;
    
public:
    UVGBTT_FluctuateHate();

};

