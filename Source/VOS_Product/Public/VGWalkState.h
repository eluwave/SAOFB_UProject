#pragma once
#include "CoreMinimal.h"
#include "VGState.h"
#include "VGWalkState.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGWalkState : public UVGState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_walk_to_jog_threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_back_to_bj_threshold;
    
public:
    UVGWalkState();

};

