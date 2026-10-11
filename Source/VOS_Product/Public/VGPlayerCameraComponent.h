#pragma once
#include "CoreMinimal.h"
#include "VGCameraComponent.h"
#include "VGPlayerCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGPlayerCameraComponent : public UVGCameraComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_including_target_dist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_scope_sway_angle_rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_scope_sway_coef;
    
public:
    UVGPlayerCameraComponent(const FObjectInitializer& ObjectInitializer);

};

