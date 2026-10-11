#pragma once
#include "CoreMinimal.h"
#include "VGBattleRuleComponentBase.h"
#include "VGBattleRuleComponentSingle.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGBattleRuleComponentSingle : public UVGBattleRuleComponentBase {
    GENERATED_BODY()
public:
    UVGBattleRuleComponentSingle(const FObjectInitializer& ObjectInitializer);

};

