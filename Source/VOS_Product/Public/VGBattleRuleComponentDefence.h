#pragma once
#include "CoreMinimal.h"
#include "VGBattleRuleComponentBase.h"
#include "VGBattleRuleComponentDefence.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGBattleRuleComponentDefence : public UVGBattleRuleComponentBase {
    GENERATED_BODY()
public:
    UVGBattleRuleComponentDefence(const FObjectInitializer& ObjectInitializer);

};

