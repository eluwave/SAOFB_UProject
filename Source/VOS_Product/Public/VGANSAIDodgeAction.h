#pragma once
#include "CoreMinimal.h"
#include "EVGDodgeAction.h"
#include "VGAnimNotifyState.h"
#include "VGANSAIDodgeAction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class VOS_PRODUCT_API UVGANSAIDodgeAction : public UVGAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGDodgeAction m_action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_probability;
    
    UVGANSAIDodgeAction();

};

