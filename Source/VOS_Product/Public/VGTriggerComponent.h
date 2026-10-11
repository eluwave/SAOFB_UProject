#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "VGTriggerComponent.generated.h"

class UVGTriggerLibrary;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGTriggerComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVGTriggerLibrary*> m_trigger_libraries;
    
public:
    UVGTriggerComponent(const FObjectInitializer& ObjectInitializer);

};

