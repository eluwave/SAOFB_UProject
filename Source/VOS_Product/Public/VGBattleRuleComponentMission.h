#pragma once
#include "CoreMinimal.h"
#include "VGBattleRuleComponentBase.h"
#include "VGBattleRuleComponentMission.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGBattleRuleComponentMission : public UVGBattleRuleComponentBase {
    GENERATED_BODY()
public:
    UVGBattleRuleComponentMission(const FObjectInitializer& ObjectInitializer);

};

