#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "VGPassiveSkillComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGPassiveSkillComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UVGPassiveSkillComponent(const FObjectInitializer& ObjectInitializer);

};

