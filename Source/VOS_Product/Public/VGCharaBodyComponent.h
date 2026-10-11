#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "VGCharaBodyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGCharaBodyComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UVGCharaBodyComponent(const FObjectInitializer& ObjectInitializer);

};

