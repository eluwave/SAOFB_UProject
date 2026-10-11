#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "VGBTT_ChangeMoveRatio.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTT_ChangeMoveRatio : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ratio;
    
public:
    UVGBTT_ChangeMoveRatio();

};

