#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "VGSkeletalMeshComponent.generated.h"

class UMaterialInstanceDynamic;
class UVGPhysicsParamAsset;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> m_dynamic_materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGPhysicsParamAsset* m_physics_param_asset;
    
public:
    UVGSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

};

