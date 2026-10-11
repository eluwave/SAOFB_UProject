#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VGBattleRuleComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGBattleRuleComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UVGBattleRuleComponentBase(const FObjectInitializer& ObjectInitializer);

};

