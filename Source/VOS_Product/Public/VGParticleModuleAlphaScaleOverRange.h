#pragma once
#include "CoreMinimal.h"
#include "Particles/Color/ParticleModuleColorBase.h"
#include "VGParticleModuleAlphaScaleOverRange.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVGParticleModuleAlphaScaleOverRange : public UParticleModuleColorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttenuationStartRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttenuationEndRange;
    
    UVGParticleModuleAlphaScaleOverRange();

};

