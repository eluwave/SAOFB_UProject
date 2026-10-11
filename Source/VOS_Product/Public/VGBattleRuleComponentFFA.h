#pragma once
#include "CoreMinimal.h"
#include "VGBattleRuleComponentBase.h"
#include "VGBattleRuleComponentFFA.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGBattleRuleComponentFFA : public UVGBattleRuleComponentBase {
    GENERATED_BODY()
public:
    UVGBattleRuleComponentFFA(const FObjectInitializer& ObjectInitializer);

};

