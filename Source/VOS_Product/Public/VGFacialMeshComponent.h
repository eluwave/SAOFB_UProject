#pragma once
#include "CoreMinimal.h"
#include "EVGFacialExpressionPattern.h"
#include "EVGFacialPart.h"
#include "VGSkeletalMeshComponent.h"
#include "VGFacialMeshComponent.generated.h"

class UVGLookAtComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGFacialMeshComponent : public UVGSkeletalMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGLookAtComponent* m_look_at_component;
    
public:
    UVGFacialMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetExpression(EVGFacialExpressionPattern pattern, EVGFacialPart part);
    
};

