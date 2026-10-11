#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGAISkillSpec.h"
#include "VGAISkillCondition.generated.h"

class UVGAIUnit;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGAISkillCondition : public UObject {
    GENERATED_BODY()
public:
    UVGAISkillCondition();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckExecutableToTarget(bool& executable, const UVGAIUnit* unit, const FVGAISkillSpec& spec, const UVGAIUnit* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckExecutable(bool& executable, const UVGAIUnit* unit, const FVGAISkillSpec& spec, int32& priority_offset);
    
};

