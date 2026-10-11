#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "DMRandomPrimitiveDrawComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DMDEVELOPER_API UDMRandomPrimitiveDrawComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UDMRandomPrimitiveDrawComponent(const FObjectInitializer& ObjectInitializer);

};

