#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "VGVfxPhysicalSurface.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FVGVfxPhysicalSurface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> surface_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* particle;
    
    VOS_PRODUCT_API FVGVfxPhysicalSurface();
};

