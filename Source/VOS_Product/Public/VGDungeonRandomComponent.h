#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VGDungeonRandomObjectSelector.h"
#include "VGDungeonRandomComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGDungeonRandomComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGDungeonRandomObjectSelector> selects;
    
public:
    UVGDungeonRandomComponent(const FObjectInitializer& ObjectInitializer);

};

