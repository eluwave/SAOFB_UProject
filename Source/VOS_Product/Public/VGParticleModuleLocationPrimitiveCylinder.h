#pragma once
#include "CoreMinimal.h"
#include "Particles/Location/ParticleModuleLocationPrimitiveCylinder.h"
#include "VGParticleModuleLocationPrimitiveCylinder.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVGParticleModuleLocationPrimitiveCylinder : public UParticleModuleLocationPrimitiveCylinder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChainRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChainRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChainInverse;
    
    UVGParticleModuleLocationPrimitiveCylinder();

};

