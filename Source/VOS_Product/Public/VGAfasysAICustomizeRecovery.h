#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysAIRecovery.h"
#include "VGAfasysAICustomizeBase.h"
#include "VGAfasysAICustomizeRecovery.generated.h"

USTRUCT(BlueprintType)
struct FVGAfasysAICustomizeRecovery : public FVGAfasysAICustomizeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysAIRecovery::Type> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float recovery_range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float recovery_priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Heal_Hp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float self_recovery_priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float self_heal_hp;
    
    VOS_PRODUCT_API FVGAfasysAICustomizeRecovery();
};

