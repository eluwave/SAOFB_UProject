#pragma once
#include "CoreMinimal.h"

#include "Components/SceneComponent.h"
#include "VGLookAtComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGLookAtComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_default_target_offset;
    
public:
    UVGLookAtComponent(const FObjectInitializer& ObjectInitializer);

};

