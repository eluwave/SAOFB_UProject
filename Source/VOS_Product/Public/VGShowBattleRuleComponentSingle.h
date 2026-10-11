#pragma once
#include "CoreMinimal.h"
#include "VGBattleRuleComponentBase.h"
#include "VGShowBattleRuleComponentSingle.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGShowBattleRuleComponentSingle : public UVGBattleRuleComponentBase {
    GENERATED_BODY()
public:
    UVGShowBattleRuleComponentSingle(const FObjectInitializer& ObjectInitializer);

};

