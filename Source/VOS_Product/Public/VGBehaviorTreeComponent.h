#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "VGBehaviorTreeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGBehaviorTreeComponent : public UBehaviorTreeComponent {
    GENERATED_BODY()
public:
    UVGBehaviorTreeComponent(const FObjectInitializer& ObjectInitializer);

};

