#pragma once
#include "CoreMinimal.h"
#include "VGBattleRuleComponentBase.h"
#include "VGBattleRuleComponentAbyss.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGBattleRuleComponentAbyss : public UVGBattleRuleComponentBase {
    GENERATED_BODY()
public:
    UVGBattleRuleComponentAbyss(const FObjectInitializer& ObjectInitializer);

};

